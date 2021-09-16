#!/bin/bash
wget -P /tmp https://github.com/abelTooLIT/alx-low_level_programming/0x18-dynamic_libraries/100-operations.so
export LD_PRELOAD=/tmp/100-operations.so
