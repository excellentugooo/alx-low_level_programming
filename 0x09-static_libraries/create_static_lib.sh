#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c -o *.o
ar -rcs liball.a *.o
