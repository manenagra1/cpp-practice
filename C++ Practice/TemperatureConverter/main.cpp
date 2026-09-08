#include <iostream>

double temp_fer(double c){
    double f = (c * (9.0 / 5.0)) + 32;
    return f;
}

double temp_cel(double f){
    double c = (f - 32) * (5.0 / 9.0);
    return c;
}
double temp_kel(double c){
    double k = c + 273.15;
    return k;
}

std::string state(double c){
    if(c<0){
        return "water is freezing";
    }else if(0<=c && c<50){
        return "Water is liquid";
    }else if(c>=50){
        return "Water is boiling";
    }else{
        return "Not Valid";
    }
}

int main(){
    // initialize variable
    int option;
    double c;
    double f;
    double k;
    std::string type;
    std::string ans="y";


    while(ans=="y" || ans=="Y"){

    // ask user for info
    std::cout<<"Temperature Converter\n\n1. Celsius to Fahrenheit\n2. Fahrenheit to Celsius\n3. Kelvin\n4. Exit\n\nChoose an option: ";
    std::cin>>option;
    std::cout<<std::endl;

    // else if operation
    if (option==1){
        std::cout<<"Enter temperature in Celsius: ";
        std::cin>>c;
        std::cout<<std::endl;
        f=temp_fer(c);
        std::cout<<c<<"°C = "<<f<<"°F"<<std::endl;
        std::cout<<state(c)<<std::endl;
    } else if (option==2){
        std::cout<<"Enter temperature in Fahrenheit: ";
        std::cin>>f;
        std::cout<<std::endl;
        c = temp_cel(f);
        std::cout<<f<<"°F"<<" = "<<c<<"°C"<<std::endl;
        std::cout<<state(c)<<std::endl;    
    } else if (option==3){
        std::cout<<"Is the temperature in Celsius or Fahrenheit or kelvin (eg, c or f or k)?: ";
        std::cin>>type;
        std::cout<<std::endl;
        if (type== "f"){
        std::cout<<"Enter temperature in Fahrenheit: ";
        std::cin>>f;
        std::cout<<std::endl;
            c = temp_cel(f);
            k = temp_kel(c);
            std::cout<<f<<"°f = "<<k<<" kelvin"<<std::endl;
            std::cout<<state(c)<<std::endl;
        }else if (type=="c"){
        std::cout<<"Enter temperature in Celsius: ";
        std::cin>>c;
        std::cout<<std::endl;
        k = temp_kel(c);
        std::cout<<c<<"°C = "<<k<<" kelvin"<<std::endl;
        std::cout<<state(c)<<std::endl;
        }else if (type =="k"){
         std::cout<<"Enter temperature in Kelvin: ";
        std::cin>>k;
        std::cout<<std::endl;
        f = (k - 273.15) * 9 / 5 + 32;
        c = temp_cel(f);
        std::cout<<k<<" kelvin == "<<f<<"°F"<<" = "<<c<<"°C"<<std::endl;
        std::cout<<state(c)<<std::endl;
        }else{
            std::cout<<"Invalid input";
        }      
    }else if(option==4){
        std::cout<<"you have exited";
        break;
    }
    std::cout<<"would you like to convert another temp?(y/n) "<<std::endl;
    std::cin>>ans;
    }
}
