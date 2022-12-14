#!/bin/bash
rm ./bin/main.o
g++ ./src/main.cpp -o ./bin/main.o &&  
g++ ./src/reverse.cpp -o ./bin/reverse.o &&  
g++ ./bin/main.o ./bin/reverse.o -o ./bin/Zajecalc &&
./bin/main.o



