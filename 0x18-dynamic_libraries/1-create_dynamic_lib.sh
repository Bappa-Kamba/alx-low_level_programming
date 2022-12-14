#!/bin/bash
gcc -c -FCIP *.c
gcc -shared -o liball.so *.o
