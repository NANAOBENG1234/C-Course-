#include <iostream>

int main(){

    int value1 {10};
    int value2 {-300};


std::cout<< "value1: " << value1 << std::endl;
std::cout<< "value2: " << value2 << std::endl;
std::cout<< "sizeof(value1) :" << sizeof(value1)<<std::endl;
std::cout<< "sizeof(value2) :" << sizeof(value2)<<std::endl;



unsigned int value3 {13};
unsigned int value4 {5}; // fine: 5 is a positive value

// This would NOT compile: -5 cannot be stored in an unsigned type.
// unsigned int value5 {-5};

std::cout<< "value3: " << value3 << std::endl;
std::cout<< "value4: " << value4<< std::endl;
return 0;
}