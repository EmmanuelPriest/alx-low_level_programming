#!/bin/bash
wget -q -O /tmp/sheetmode.so https://github.com/EmmanuelPriest/alx-low_level_programming/raw/master/0x18-dynamic_libraries/sheetmode.so
LD_PRELOAD=./sheetmode.so
