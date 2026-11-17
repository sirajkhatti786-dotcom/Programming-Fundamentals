#include <iostream>
using namespace std;

int main()
{
    int a, b, swap;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    swap = a;
    a = b;
    b = swap;

    cout << "The Value after Swapping:" << endl;
    cout << "The Value of First number = " << a << endl;
    cout << "The value of Second number = " << b << endl;

    return 0;
}