#!/bin/bash
set -o errexit
set -o nounset

# Get the codesigning env vars
. "$HOME/bin/code-sign-env"

# codesign -s "$CODESIGN_ID" --timestamp --options runtime -f --deep "$1"
codesign -vvv --deep --strict "$1"

OUTPUT="$(mktemp)"
xcrun altool --notarize-app \
             --primary-bundle-id "$1" \
			 --username "$APPLE_ID_EMAIL" \
			 --password "$NOTARISATION_PASSWORD" \
			 --asc-provider "$NOTARISATION_PROVIDER" \
             --file "$1" \
			 2>&1 | tee "$OUTPUT"
UUID=$(awk '/RequestUUID/ { print $3 }' "$OUTPUT")

if [ -z "$UUID" ]
then
	echo "ERROR: Failed to capture RequestUUID from xcrun output".
	exit 1
fi

echo "Waiting for Status: success"

while [ -z "$(grep "Status: success" "$OUTPUT")" ]
do	
	sleep 10
	xcrun altool --notarization-info "$UUID" \
				 -u "$APPLE_ID_EMAIL" \
				 -p "$NOTARISATION_PASSWORD" \
				 2>&1 | tee "$OUTPUT"
done

xcrun stapler staple "$1"

