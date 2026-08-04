// this includes the iostream library
#include <iostream>
#include <iomanip>//this function sets the width of the table and it content

int main(){
    // this is going to print out "hello world"
    std::cout << "hello " ;
    std::cout <<"World";


std::cout<<std::endl;
std::cout<<"---------------------------"<<std::endl;
// and to print it on the same line 

std::cout<<"hello"<<std::endl;
std::cout<<"World"<<std::endl;

std::cout<<std::endl;
std::cout<<"Hello\n";
std::cout<<"World\n";


//=============================================================
std::cout<<std::endl;



//std::flushes the output to it's final destination 
std::cout<<"My God never fails me"<<std::flush;
std::cout<<"-------------------"<<std::endl;
std::cout<<std::endl;
//==============================================
//Trying something crazy

std::cout<<"Unformated table : "<<std::endl;
std::cout<<"Daniel   "<<"Gray  "<<"25"<<std::endl;
std::cout<<"Stanley "<<"wood  "<<"33  "<<std::endl;
std::cout<<"Jordan "<<"Parker "<<"45"<<std::endl;
std::cout<<"Joe  "<<"Ball "<<"21"<<std::endl;
std::cout<<"Josh  "<<" Carr "<<"27"<<std::endl;
std::cout<<"Izaiah  "<<"Robinson "<<"30"<<std::endl;

std::cout<<std::endl;

std::cout<<" Formated Table :"<<std::endl;
std::cout << std::setw(10)<<"Firstname  "<< std::setw(10)<< "Last Name  " << std::setw(10)<< "Age"<<std::endl;
 std::cout<< std::setw(10)<<"Daniel   "<< std::setw(10)<<"Gray  "<< std::setw(10)<<"25"<<std::endl;
std::cout<< std::setw(10)<<"Stanley "<< std::setw(10)<<"wood  "<< std::setw(10)<<"33  "<<std::endl;
std::cout<<"Jordan "<< std::setw(10)<<"Parker "<< std::setw(10)<<"45"<<std::endl;
std::cout<< std::setw(10)<<"Joe  "<< std::setw(10)<<"Ball "<< std::setw(10)<<"21"<<std::endl;
std::cout<< std::setw(10)<<"Josh  "<< std::setw(10)<<" Carr "<< std::setw(10)<<"27"<<std::endl;
std::cout<< std::setw(10)<<"Izaiah  "<< std::setw(10)<<"Robinson "<< std::setw(10)<<"30"<<std::endl;


    return 0;
    // the program ends here
}