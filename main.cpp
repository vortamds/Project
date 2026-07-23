#include <iostream>

int main() {

    double num1 , num2;
    std::cout << "Enter a nubmer one : ";
    std::cin >> num1;
    std::cout << "Enter a number two : ";
    std::cin >> num2;

    double sum = num1 + num2;
    double diff = num1 - num2;
    double product = num1 * num2;
    double quotient = num1 / num2;


    std::cout << "جمع این دو عدد :‌" << sum << '\n';
    std::cout << "تفریق این دو عدد :‌" << diff << '\n';
    std::cout << "ضرب این دو عدد :‌" << product << '\n';
    std::cout << "تقسیم این دو عدد :‌" << quotient << '\n';

    return 0;


}