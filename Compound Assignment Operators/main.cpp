// this includes the iostream library
#include <iostream>


int main(){
  
    
    int value {42};
    std::cout<<"The value is : "<<value<<std::endl;

    std::cout<<std::boolalpha;
    value +=5;// value {45} is the same then Add 5
    std::cout<<"The value is increased by 5 :"<<value<<std::endl;
    std::cout<<"value is > 50: " << (value > 50) <<std::endl;

    std::cout<<std::endl;
    value -= 5;
    std::cout<<"The value check equality and decrese it by 5: " <<value << std::endl;

    std::cout<<std::endl;
    value /=3;
    std::cout<<"The value check equality and devide by 3: " <<value << std::endl;

    
     std::cout<<std::endl;
    value *=3;
    std::cout<<"The value check equality and multiply by 3: " <<value << std::endl;

     std::cout<<std::endl;
    value %=3;
    std::cout<<"The value check equality and devide by 3 returning the remainder: " <<value << std::endl;

    return 0;
    // the program ends here
}