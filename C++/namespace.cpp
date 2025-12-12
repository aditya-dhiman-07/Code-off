#include <iostream>
namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main(){
    using namespace first;
    // int x = 0;
    int a = 10 ; int b = 88 ; int c = 99;
    std::cout <<a+b+c << std:: endl;
    std::cout <<first::x;
    std::cout <<second::x;
    return 0;
}                                                                                                               