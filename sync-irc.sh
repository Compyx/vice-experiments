#!/bin/bash
cd "$(dirname "$0")"

rsync dqh:irclogs/Freenode/'#vice-dev.log' vice-dev.log
