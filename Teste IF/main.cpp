#include <iostream>
using namespace std;

int main() {

    int a;
    int b;

   cout << "Digite A: ";
    cin >> a;

    cout << "Digite B: ";
    cin >> b;

    if(a > b) cout << "\nA e maior que B!";

    if(a < b) {
        cout << "\nA e menor que B!";
    }

    return 0;
}
