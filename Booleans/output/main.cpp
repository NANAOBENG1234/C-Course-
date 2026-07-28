// this includes the iostream library
/*#include <iostream>


int main(){
    
    bool red_light{true};
    bool green_light{false};

    if (red_light == true){
 std::cout<<"STOP!"<< std::endl;
    }else{
    std::cout<<"GO THROUGH" <<std::endl;
    }
    if(green_light){
        std::cout<<" the light is green"<< std::endl;
    }else{
        std::cout<<" the light is not green"<< std::endl;
    }
    std::cout<< "sizeof(bool): "<< sizeof(bool)<<std::endl;


     std::cout<< std::boolalpha;


    return 0;
    // the program ends here

    
}
*/

/*
   #include <iostream>
   
   int main(){
    bool red_light{true};
    bool green_light{false};

    if (red_light == true){
        std::cout<< " stop!"<< std::endl;
    }else{
        std::cout<< "Go through"<<std::endl;

    }
    if (green_light){
        std::cout << " the light is green"<< std::endl;
    }else{
        std::cout<< " the light is not green "<< std::endl;

    }

        std::cout<< "sizeof(bool) : "<< sizeof(bool)<<std::endl;

        // printing out a boolean 
        std::cout<<std::endl;
        std::cout<< " red_light :"<<red_light<< std::endl;
        std::cout<< " green_light :"<<green_light<< std::endl;


    // To print the true or false
    std::cout<<std::boolalpha;
    std::cout<< " red_light :"<<red_light<< std::endl;
    std::cout<< " green_light :"<<green_light<< std::endl;

        return 0;
        }

        */

        #include <iostream>
        int main(){
            bool red_light{false};
            bool green_light {true};
 if (red_light == true){
    std::cout<< "stop!"<<std::endl;
    }else{
std::cout<< "go through"<<std::endl;
    }
    if (green_light){
        std::cout<<" The light is green , go through"<<std::endl;
    }else {
        std::cout<<" The light is not green"<<std::endl;
    }



    std::cout<<"sizeof(bool) :"<< sizeof(bool)<<std::endl;


//printin the value of bools stores for red_light and green_light
    std::cout<<std::endl;
    std::cout<<"red_light: "<< red_light<< std::endl;
    std::cout<<"green_light: "<<green_light<< std::endl;


    // To print let say red_light = true or green_light = Flase 
    std::cout<<std::boolalpha;
    std::cout<<"red_light: "<< red_light<< std::endl;
    std::cout<<"green_light: "<<green_light<< std::endl;


    /*
    //OUTPUT
    go through
 The light is green , go through
sizeof(bool) :1

red_light: 0
green_light: 1
red_light: false
green_light: true
    */
    return 0; 
 }





        
  
            
        


        

    

