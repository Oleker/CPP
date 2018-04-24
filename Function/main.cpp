#include <iostream>
using namespace std;
void prototypeFunction();

void printSomething(){
    cout << "\nText on a void function!";
}

int main()
{
    printSomething();
    prototypeFunction();
    return 0;
}

void prototypeFunction(){
    cout << "\nYAY!";
}

