#!/bin/bash
wget -P /tmp/sheetmode.so https://github.com/EmmanuelPriest/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=./sheetmode.so
