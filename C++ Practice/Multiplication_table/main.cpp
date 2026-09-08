#include <iostream>
#include <iomanip>

int main(){
    // variable decaleration
    int num1;
    int start_mult;
    int num2;
    int end_mul;
    std::string ans="y";

    // getting input
    while(ans=="y" || ans=="Y"){
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>num1;
    std::cout<<"Enter a start multiplier: "<<std::endl;
    std::cin>>start_mult;
    std::cout<<"Enter a end multiplier: "<<std::endl;
    std::cin>>end_mul;
    for (int i{start_mult}; i<=end_mul; ++i){
        int result= num1 * i;
        std::cout<<num1 << std::setw(2) <<" x "<<std::setw(2)<<i<<std::setw(2)<<" = "<<std::setw(2)<<result<<std::endl;
    }
    std::cout<<"Do you want to create another table? (y=yes, n=no) "<<std::endl;
    std::cin>>ans;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>>num2;
    for (int i{start_mult}; i<=end_mul; ++i){
        int result1= num1 * i;
        int result2= num2 * i;
        std::cout<<num1 << std::setw(2) <<" x "<<std::setw(2)<<i<<std::setw(2)<<" = "<<std::setw(2)<<result1<<std::setw(10)<<num2 << std::setw(2) <<" x "<<std::setw(2)<<i<<std::setw(2)<<" = "<<std::setw(2)<<result2<<std::endl;
    }

    }

}