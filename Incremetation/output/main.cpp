// this includes the iostream library
#include <iostream>

/// Postfix 

int main(){
    int value = 5;
    std::cout<<"T he value is  (incrementimg)"<<value++<<std::endl;/// the value ++ save 5 and increase it by one and print out 6 as the result 
    std::cout<<"value :"<<value<<std::endl;



    std::cout<<"vlaue (id decremeting) "<< value--<<std::endl;//6
    std::cout<<"value :"<<value<<std::endl;//5

   
    // the program ends here



    //Prefixing 
   value = 7;
    ++value;
    std::cout<<"The value is (Prefixing++ ) "<< ++value <<std::endl;
    std::cout<<"value "<<value<<std::endl;
     
    value = 10;
    --value;
    std::cout<<"The value is() prefixed-- ): "<< value <<std::endl;
    std::cout<<"value"<<std::endl;
    return 0;
}