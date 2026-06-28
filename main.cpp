// main.cpp
#include <iostream>

int getUserInput()
{

    std::cout << "یک عدد وارد کنید : ";
    int input{};
    std::cin >> input;
    return input;
}
int main()
{

    int value{getUserInput()};

    std::cout << "عددی که وارد کردید " << value << " است.\n";
    return 0;
}