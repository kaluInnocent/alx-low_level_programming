#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.car
ar rc liball.a *.o
