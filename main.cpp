#include <iostream>
#define DEBUG
// #define RELEASE

int main() {

    #ifdef DEBUG
        std::cout << "حالت دیباگ فعال هست !\n";
    #endif
    #ifndef RELEASE
        std::cout << "این نسخه release نیست \n";
    #endif

    #if 0
        std::cout << "این خط چاپ نمیشو\n";
        //حتی این 
        std::cout << "حتی این ";
    #endif


    return 0;

}