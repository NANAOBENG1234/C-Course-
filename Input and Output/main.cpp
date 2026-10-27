#include <iostream>
#include <string>

int main(){
     
   //  std::cout<<"hello Benedict" << std::endl;

    //int age{20};
   // std::cout<< "age : " << age << std::endl;
    
   // std::cerr<<"error message : Something is worng on line 12" <<std::endl;
   // std::clog << "log message : Something happened " << std::endl;

   // int age1;
   // std::string name;

   // std::cout << "type in your name and age : " << std::endl;
    
   // std::cin >> name;
   // std::cin >> age1 ;
  //  std::cin>> name >> age1;
  //  std::cout<< " hello " <<  name  << " you are "<< age1 <<" years old "<< std::endl;

//How to collect data with spaces
std:: string full_name;
int age3;


 std::cout<<"enter your full name and age " << std::endl;
 std::getline(std::cin,full_name);
 std::cin >> age3;
 std::cout<< " hello " <<  full_name  << " you are "<< age3 <<" years old "<< std::endl;






    return 0; 
}


