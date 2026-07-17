// this includes the iostream library
#include <iostream>


int main(){    
    char character1 {'B'};
    char character2 {'E'};
    char character3 {'N'};
    char character4 {'E'};
    char character5 {'D'};
    char character6{'I'};
    char character7{'C'};
    char character8 {'T'};

std::cout<<"character1 :"<< character1 << std::endl;
std::cout<<"character2 :"<< character2 << std::endl;
std::cout<<"character3 :"<< character3 << std::endl;
std::cout<<"character4 :"<< character4 << std::endl;
std::cout<<"character5 :"<< character5 << std::endl; 
std::cout<<"character6 :"<< character6 << std::endl;
std::cout<<"character7 :"<< character7 << std::endl;
std::cout<<"character8 :"<< character8 << std::endl;
//one byte = 2^8 =256 DIFFERENT VALUES (0- 255)
char value = 65;
std::cout<< "value :" << value <<std::endl;
std::cout<< "value : "<< static_cast<int>(value)<<std::endl; 

    
    return 0;
    // the program ends here
}