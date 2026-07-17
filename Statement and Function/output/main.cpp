#include <iostream>

int addNumber( int first_param, int second_param){     int result =  first_param + second_param;     return result; } 
int main(){      int first_number{13};   
int second_number{7}; 

std::cout<< "firt_number : " << first_number << std::endl;    
std::cout << " second_number : " << second_number << std::endl;     
int sum = first_number + second_number;

sum = addNumber(37,9);     
std::cout << " sum : " << sum << std::endl;


return 0; 

}


//EXERCISE COMPLETED

/*#include <iostream>

int multNumber(int first_number, int second_number){
int result = first_number * second_number;
return result;
}
int main(){
    int first_param {13};
    int second_param {2};
    
    std::cout << "first_param: "<< first_param << std::endl;
    std::cout << "second_param: " << second_param<< std::endl;

 int sum = multNumber(34,6);
std::cout << " sum :" << sum  << std::endl;

return 0;

} */

