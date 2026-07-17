#include <iostream>

int main(){

    int value1 {10};
    int value2 {-300};


std::cout<< "value1: " << value1 << std::endl;
std::cout<< "value2: " << value2 << std::endl;
std::cout<< "sizeof(value1) :" << sizeof(value1)<<std::endl;
std::cout<< "sizeof(value2) :" << sizeof(value2)<<std::endl;



//unsigned int value3 {13};
//unsigned int value4 {-5};// compile error because unsigned is use to store positive values only
return 0;
}