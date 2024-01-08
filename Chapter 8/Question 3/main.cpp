#include "Random.h"
#include <iostream>

void geuss();

char playAgain();



int main()
{
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is." << '\n';
    geuss();

	return 0;
}

void geuss(){

    const int random{Random::get(1,100)};
    int x;
    int i{1};
    for(i; i <= 7; ++i){
        std::cout << "Geuss #" << i << ": ";
        std::cin >> x;

    if(x == random){
        std::cout << "Congartulations!! YOU WON.";
        playAgain();
    }
    else if(x > random){
        std::cout << "Your guess is too high.\n";
    }
    else{
        std::cout << "Your guess is too low.\n";
    }

    if(i == 8){
        std::cout << "I'am sorry, you lost";
        playAgain();
    }
    }

}

char playAgain(){

    char c;
    while(true){
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> c;

    if(c == 'n'){
        return 0;
    }
    else if(c == 'y'){
        geuss();
    }
    else{
        std::cout << "Please Enter y or n: ";
    }
    }

    return c;
}
