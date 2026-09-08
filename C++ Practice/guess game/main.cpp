#include <iostream>
#include <random>

int generateRandomNumber(int o){
    // Create a random device and seed the generator
    std::random_device rd;  
    std::mt19937 gen(rd()); // Mersenne Twister engine

    if (o==1){
    // Define the range [1, 10]
        std::uniform_int_distribution<> dist(1, 10);
        // Generate a random number
        std::cout<<"I'm thinking of a number between 1-10"<<std::endl;
        int randomNumber = dist(gen);

        return randomNumber;
    }else if (o==2){
        std::uniform_int_distribution<> dist(1, 50);
        std::cout<<"I'm thinking of a number between 1-50"<<std::endl;
        int randomNumber = dist(gen);

        return randomNumber;
    }else if (o==3){
        std::uniform_int_distribution<> dist(1, 100);
        std::cout<<"I'm thinking of a number between 1-100"<<std::endl;
        int randomNumber = dist(gen);
        return randomNumber;
    }
    return 0;
    
}

int made_guess(){
    int guess;
    std::cout<<"Enter your guess: ";
    std::cin>>guess;
    std::cout<<std::endl;
    return guess;
}

int made_attempt(int attempt){
    return attempt+1;
}

char try_again(){
    char again;
    std::cout<<"Would you like to try again?(y/n) "<<std::endl;
    std::cin>>again;
    return again;
}


int main(){

    int guess;
    int option;
    int attempt=0;
    char again='y';
    int best_attempt=0;
    
    std::cout<<"Welcome to the Number Guessing Game!"<<std::endl;
    std::cout<<"Would you like the difficulty:\n1.easy(1-10)\n2.Medium(1-50)\n3.Hard(1-100)\nEnter your choice(e.g, 1,2,3): "<<std::endl;
    std::cin>>option;
    int random=generateRandomNumber(option);

    while (again=='y' || again=='Y'){
    guess=made_guess();
    attempt=made_attempt(attempt);

    if (attempt==10 && guess!=random){
    std::cout<<"Game Over!\nThe number was "<<random<<std::endl;
        if(best_attempt == 0 || attempt < best_attempt){
            best_attempt=attempt;
        }
    again=try_again();
        if (again=='y'||again=='Y'){
            std::cout<<"Would you like the difficulty:\n1.easy(1-10)\n2.Medium(1-50)\n3.Hard(1-100)\nEnter your choice(e.g, 1,2,3): "<<std::endl;
            std::cin>>option;
            random=generateRandomNumber(option);
        }else if(again=='n'||again=='N'){
            if (best_attempt>0){
            std::cout<<"Best game: "<<best_attempt<<"\nCurrent game: "<<attempt<<std::endl;
            }  
        }
    attempt=0;
    }
    if (guess==random){
        std::cout<<"Correct!\nYou guessed the number in "<<attempt<<" attempts."<<std::endl;
        if(best_attempt == 0 || attempt < best_attempt){
            best_attempt=attempt;
        }
    again=try_again();
        if (again=='y'||again=='Y'){
            std::cout<<"Would you like the difficulty:\n1.easy(1-10)\n2.Medium(1-50)\n3.Hard(1-100)\nEnter your choice(e.g, 1,2,3): "<<std::endl;
            std::cin>>option;
            random=generateRandomNumber(option);
        }else if(again=='n'||again=='N'){
            if (best_attempt>0){
            std::cout<<"Best game: "<<best_attempt<<"\nCurrent game: "<<attempt<<std::endl;
            }  
        }
    attempt=0;
    }else if(guess<random){
        std::cout<<"It's low"<<std::endl;
    }else if(guess>random){
        std::cout<<"It's high"<<std::endl;
    }
}
}