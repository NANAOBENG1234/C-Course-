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
int col_width = 10;
std::cout<<" Formated Table :"<<std::endl;
std::cout << std::setw(col_width)<<"Firstname"<<std::setw(col_width)<< "Last Name  " << std::setw(col_width)<< "Age"<<std::endl;
 std::cout<< std::setw(col_width)<<"Daniel"<<std::setw(col_width)<<"Gray"<<std::setw(col_width)<<"25"<<std::endl;
std::cout<< std::setw(col_width)<<"Stanley"<<std::setw(col_width)<<"wood"<<std::setw(col_width)<<"33"<<std::endl;
std::cout<< std::setw(col_width)<<"Jordan"<<std::setw(col_width)<<"Parker"<<std::setw(col_width)<<"45"<<std::endl;
std::cout<< std::setw(col_width)<<"Joe"<<std::setw(col_width)<<"Ball"<<std::setw(col_width)<<"21"<<std::endl;
std::cout<< std::setw(col_width)<<"Josh"<<std::setw(col_width)<<"Carr"<<std::setw(col_width)<<"27"<<std::endl;
std::cout<< std::setw(col_width)<<"Izaiah"<<std::setw(col_width)<<"Robinson"<<std::setw(col_width)<<"30"<<std::endl;




    return 0;
    // the program ends here
}