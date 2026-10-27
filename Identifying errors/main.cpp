#include <iostream>

int main(){
    // this is compile time error: it occurs because the is an ex[ected that i forgot to add 
    std::cout << "hello world" <<std::endl;
    return 0;
    //Run time error
    int value = 7/0;
    std::cout << "value" << value << std::endl;
    return 0;
} 