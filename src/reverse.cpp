#include "../include/declarationfile.hpp"
#include <iostream>





void reverse_function() {
    std::cout << "Podaj zmienna string do odwrocenia" <<std::endl;
    std::string inner;
    std::cin >> inner;
    int dlstring = inner.size();
    std::string outer(dlstring,'0');
    int realstrlength = dlstring -1;
    for(int i=0; i<= realstrlength; ++i){
        outer[i]=inner[realstrlength -i];
    }
    std::cout << "To jest twoje odwrocone slowo " << outer <<std::endl;
} 

void reverse_function2() {
    std::cout << "Podaj zmienna string do odwrocenia" <<std::endl;
    std::string inner;
    std::cin >> inner;
    int dlstring = inner.size();
    std::string outer; 
    
    // for(int i=0; i<dlstring; ++i){
    //     outer.push_back (inner[(dlstring-1)-i]);
    // }
    for(int i=(dlstring-1); i>=0; --i){                     
        outer.push_back (inner[i]);
    }
    std::cout << "To jest twoje odwrocone slowo " << outer <<std::endl;
}


//Deklaracja funkcji
 
    // outer[5]=inner[0];
    // outer[4]=inner[1];
    // outer[3]=inner[2];
    // outer[2]=inner[3];
    // outer[1]=inner[4];
    // outer[0]=inner[5];






