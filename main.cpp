#include <iostream>

int main() {

    bool isSunny {true};
    bool isCloudy {!isSunny};

    std::cout << "افتابی:‌" << isSunny << '\n';
    std::cout << "ابری :‌" << isCloudy << '\n';


    return 0;


}