#include <iostream>

#define LOG(x) std::cout << x << std::endl

using namespace std;

int main(){
    int var = 8;
    int* ptr = &var;

    LOG(var);
    LOG(ptr);
    cin.get();
}