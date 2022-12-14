#!/bin/bash
gcc -o -FCIP *.c
gcc -shared -o liball.so *.o
