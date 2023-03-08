#include <iostream>

int main() {
    double x = 10.0;
    double y = 2.0;
    x = x + y; 
    double z = y / x;

    int a = 7;
    int  b = ++a; // Tanto a como b serán 8
    int c = a++; // c será 8 y a será 9

    std::cout << a;
    return 0;

}