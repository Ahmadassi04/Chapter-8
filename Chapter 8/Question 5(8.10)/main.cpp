#include <iostream>

void fizzbuzz(int x){

    for(int i{1}; i <= x ; ++i){

        bool check{false};
        if(i % 3 == 0){
            std::cout << "fizz";
            check = true;
        }
        if(i % 5 == 0){
            std::cout << "buzz";
            check = true;
         }
        if(i % 7 == 0){
            std::cout << "pop";
            check = true;
         }
        if(!check)
            std::cout << i;

        std::cout << '\n';
    }

}

int enterValue(){

    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;

    return x;
}

int main()
{
    int x{enterValue()};
    fizzbuzz(x);

    return 0;
}
