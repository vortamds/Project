#include <iostream>

bool isEqual(int a , int b) {
    return a == b;
}

int main() {

    int x , y;

    std::cout << "Enter a number one: ";
    std::cin >> x;
    std::cout << "Eneter a number two: ";
    std::cin >> y;

    std::cout << std::boolalpha;
    std::cout << "ایا " << x << " و " << y << "برابرند؟ " << isEqual(x , y) << '\n';

    return 0;


}