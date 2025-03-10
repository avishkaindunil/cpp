#include <iostream>
using namespace std;

int Multiply(int a, int b) {
    return a * b;
}

int MultiplyAndLog(int a, int b){
    int result = Multiply(a, b);
    cout << result << endl;

    return 0;
}

int main() {
    MultiplyAndLog(3, 4);
    MultiplyAndLog(9999999, 999);

    // std::cin.get();
}