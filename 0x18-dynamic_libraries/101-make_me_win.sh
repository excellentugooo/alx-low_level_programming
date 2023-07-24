#!/bin/bash
echo -e '#include <stdio.h>\n#include <stdlib.h>\n\nvoid print_winning_message() { printf("--> Please make me win!\\n"); }\n\nint rand() { return 6; }\n\nint rand_r(unsigned int *seedp) { return 6; }\n\nlong int random() { return 6; }' > /tmp/hack.c && gcc -Wall -shared -fPIC -o /tmp/nrandom.so /tmp/hack.c
