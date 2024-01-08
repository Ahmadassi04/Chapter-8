#include <iostream>

int calculate(int x,int y, char c){

    switch(c){

    case '+':
        std::cout << x << " + " << y << " = " << x + y << '\n';
        break;
    case '-':
        std::cout << x << " - " << y << " = " << x - y << '\n';
        break;
    case '*':
        std::cout << x << " * " << y << " = " << x * y << '\n';
        break;
    case '/':
        std::cout << x << " / " << y << " = " << x / y << '\n';
        break;
    case '%':
        std::cout << x << " % " << y << " = " << x % y << '\n';
        break;
    default:
        std::cout << "ERROR 404...";

    }

    return c;
}

int enterValue(){

    std::cout << "Enter an integer: ";
    int value;
    std::cin >> value;

    return value;
}

char enterOperator(){

    std::cout << "Enter the operator: ";
    char o;
    std::cin >> o;

    return o;
}

int main()
{

    int x {enterValue()};
    int y {enterValue()};
    char o {enterOperator()};

    calculate(x,y,o);

    return 0;
}
