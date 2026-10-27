// this includes the iostream library
#include <iostream>


int main(){
    int num1 {32};
    int num2 {45};
    std::cout<<"num1 : "<< num1<<std::endl;
    std::cout<<"num2 : "<< num2<<std::endl;


    std::cout<<std::endl;
    std::cout<<"Comparing Varaibles"<<std::endl;

std::cout<<std::boolalpha;
std::cout<<"num1 < num2 : "<<(num1 < num2 )<<std::endl;
std::cout<<"num1 <= num2 : "<<(num1 <= num2 )<<std::endl;
std::cout<<"num1 > num2 : "<<(num1 > num2 )<<std::endl;
std::cout<<"num1 >= num2 : "<<(num1 >= num2 )<<std::endl;
std::cout<<"num1 == num2 : "<<(num1 == num2 )<<std::endl;
std::cout<<"num1 != num2 : "<<(num1 != num2 )<<std::endl;


    return 0;
    // the program ends here
}