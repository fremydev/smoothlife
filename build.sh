#!/bin/bash

cc -O3 -Wall -Wextra -o smoothlife main.c -lm -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
