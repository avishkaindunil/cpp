#include <iostream>
#include <string> 
using namespace std;

int main() {
    string text = "Heello";

    if (text == "Hello") {
        for (int i = 0; i < 5; i++) {
            cout << text[i] << endl;
        }
    } else {
        cout << "nothing to show" << endl;
    }

    return 0;
}
