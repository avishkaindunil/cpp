#include <iostream>
#define LOG(x) std::cout << x << std::endl
using namespace std;

int main(){
    int var = 8;
    void* ptr = &var;

    cout << var << endl;
    cout << ptr << endl;
    cin.get();
}