#!/bin/bash
rm ./bin/{main,reverse,classfactory}.o
g++ -c ./src/main.cpp -o ./bin/main.o &&  #&& - Compile or assemble the source files, but do not link. 
g++ -c ./src/reverse.cpp -o ./bin/reverse.o &&  
g++ -c ./src/classfactory.cpp -o ./bin/classfactory.o &&  
g++ ./bin/main.o ./bin/reverse.o ./bin/classfactory.o -o ./bin/main_program &&
./bin/main_program

