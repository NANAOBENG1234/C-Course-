#include <iostream>
#include <cmath>

int main(){
    std::cout<< "Hello World "<<std::endl;

  
    double opposite;
    double adjacent;
    double hypothenus;

    
    std::cout<<"Enter the Opposite :";
    std::cin>>opposite;
    std::cout<<"Enter your adjacent :";
    std::cin>>adjacent;

    opposite = pow(opposite,2);
    adjacent= pow(adjacent,2);
    hypothenus =sqrt( opposite + adjacent);

    std::cout<< "hypothenus : " << hypothenus <<std::endl;


      return 0;

}
// writing a program to calculate the mean give a set of values



    return 0;



 
