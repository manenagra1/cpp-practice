#include <iostream>
#include <string>

std::string typeNum(int num){
    if (num%2==0 && num !=0){
        if (num>0){
            return "even positive";
        } else{
            return "even negetive";
        }
    }else if (num%2!=0){
        if (num>0){
            return "odd positive";
        } else{
            return "odd negetive";
        }
    }else{
        return "zero";
    }
}

int main(){
    // declare a variable
    int num;

    // get user input
    std::cout<<"Enter a number to see if it's even or odd: ";
    std::cin>>num;

    // print if its even or odd
    std::cout<<"It is an "<<typeNum(num)<<" number."<<std::endl;

    return 0;
}