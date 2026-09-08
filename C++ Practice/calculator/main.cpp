#include <iostream>
#include <cctype>

int main(){

// initialize variables
double num_1;
double num_2;
char op;

// while loop to check if they want to continue doing the calculations

char again='y';

while (tolower(again) =='y'){
// generate a menu
std::cout<<"Type two numbers along with a math operator.\nFor the math operator you can type the following:\n-  +\n-  (-)\n-  (*)\n- (/)\nPlease separate all inputes by spaces."<<std::endl;
std::cin>>num_1>>num_2>>op;

if (op=='+'){
    std::cout<<num_1<<"+"<<num_2<<"="<<num_1+num_2<<std::endl;
}else if (op=='-'){
    std::cout<<num_1<<"-"<<num_2<<"="<<num_1-num_2<<std::endl;
}else if (op=='/'){
        //while loop to check the operator and perform the corresponding operation
    while (num_2==0){
        std::cout<<"Second number can't be zero as a number isn't divisable by zero"<<std::endl;
        std::cout<<"Please enter another number as the second number"<<std::endl;
        std::cin>>num_2;
    }
    std::cout<<num_1<<"/"<<num_2<<"="<<num_1/num_2<<std::endl;
}else if (op=='*'){
    std::cout<<num_1<<"*"<<num_2<<"="<<num_1*num_2<<std::endl;
}else{
    std::cout<<"invalid operation"<<std::endl;
}

std::cout<<"Do you want to do the calculation again, type 'y' for yes 'n' for no"<<std::endl;
std::cin>>again;

}
}