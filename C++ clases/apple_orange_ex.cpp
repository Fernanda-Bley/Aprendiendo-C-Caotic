#include <iostream>

int main() {
    int apples = 32;
    int oranges = 41;
    int intermediario = apples;
    apples = oranges;
    oranges = intermediario;
    std::cout << apples << std::endl;
}