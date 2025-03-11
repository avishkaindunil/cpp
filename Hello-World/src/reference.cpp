#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int& value) {
    value++;
}

int main() {
    int a = 5;
    int b = 9;

    int& ref = a;
    ref = b;

    Increment(a);
    // int& ref = a;

    // ref = 2;

    LOG(a);
    LOG(b);
}