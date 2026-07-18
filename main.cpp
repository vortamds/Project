// main.cpp
#include <iostream>

int readNumber() {
    std::cout << "Please enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int x) {
    std::cout << "The quotient is: " << x << '\n';
}

int main() {
    int x{ readNumber() };
    int y{ readNumber() };
    writeAnswer(x / y); // y همیشه صفر است!
    return 0;
}