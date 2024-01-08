#include <iostream>

int sumTo(int value){
    int sum{0};
    for(int i{1}; i <= value; ++i){
        sum +=i;
    }
    std::cout << sum;

    return sum;
}

int enterValue(){

    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;

    return x;
}

int main(){

    int x{enterValue()};
    sumTo(x);

    return 0;
}
