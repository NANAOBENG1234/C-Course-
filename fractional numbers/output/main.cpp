// this includes the iostream library
#include <iostream>
#include <iomanip>

int main(){
  
    float number1 {1.12345678934670f};// don't forget the f
    double number2 {1.231234455};
    long double number3 {1.3454547788L};// here to add L

    std::cout<< " sizeof  number1 :"<<sizeof (number1) <<std::endl;
    std::cout<< " sizeof number2  :"<<sizeof (number2) <<std::endl;
    std::cout<< " sizeof number3  :"<<sizeof (number3) <<std::endl;


    std::cout<<std::setprecision(20);//controls the precision from std::cout.
    std::cout<< "   number1 :"<< (number1) <<std::endl;
    std::cout<< "   number2 :"<< (number2) <<std::endl;
    std::cout<< "   number3 :"<< (number3) <<std::endl;



     float number4 { 182635.8};
         std::cout<< "   number4 :"<< (number4) <<std::endl;


         // Scientific notation
    std::cout <<"---------------------"<<std::endl;

    double number5 {192634885};
    double number6 {1.92400006645};
    double number7 {1.924e8};
    double number8 {0.00000000635};
    double number9 {3.948e-11};// multiply with 10 exponent (-11)

    std::cout<< "   number5 is :"<< (number5 ) <<std::endl;
    std::cout<< "   number6 is :"<< (number6 ) <<std::endl;
    std::cout<< "   number7 is :"<< (number7 ) <<std::endl;
    std::cout<< "   number8 is :"<< (number8 ) <<std::endl;
    std::cout<< "   number9 is :"<< (number9 ) <<std::endl;


    // Infinity and nan
    std::cout<< std::endl;
    std::cout<< "Infinty and NAN"<< std::endl;
    double number10 {-5.6};
    double number11 {};
    double number12{};
// INFINITY
    double result {number10 / number11};

    std::cout<< number10 << "/" << number11 << " yeild " << result << std::endl;
    std::cout<< number10 << "/" << number11 << " yeild " << result << std::endl;
    std::cout << result<< "+" << number10 << "yeild"<< result + number10<< std::endl;

    //NAN
    result = number11 / number12;// this will give 0/0 which is nan
    std::cout << number11 << "/" << number12 << "yeild " << result << std::endl;

    return 0;
    // the program ends here
}