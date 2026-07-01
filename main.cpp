// main.cpp
#include <iostream>
int getUserInput() {
    std::cout << "Enter an number: ";
    int x{};
    std::cin >> x;
    return x;
}
int main() 
{
    int value{getUserInput()};
    std::cout << "عددی که وارد کردید " << value << " است \n";

    return 0;
}