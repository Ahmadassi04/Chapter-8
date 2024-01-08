#include <iostream>

int main(){

    char a{'a'};
    while(a <= 'z'){
        std::cout << a << " " <<static_cast<int>(a) <<'\n';
        ++a;
    }

    return 0;
}
