#include <iostream>

int main(){
    int number=0;
    double sum=0;
    int max=0;
    int min=0;
   std::cout<<"Enter number of students: "<<std::endl;
   std::cin>>number;
   double* grades=new double[number];

    std::cout<<"Enter grades:"<<std::endl;
   for(int i=0; i<number;++i){
        double grade;
        std::cin>>grade;
        sum+=grade;
        grades[i]=grade;
        if (max<grade){
            max=grade;
        }
        if(min>grade){
            min=grade;
        }
   }
   std::cout<<"Average: "<<sum/number<<"\n"<<"Highest: "<<max<<"\n"<<"Lowest: "<<min<<std::endl;
   delete[] grades;
   

}
