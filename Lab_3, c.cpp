#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout <<"Enter first number: ";
    cin >>num1;

             cout <<"Enter second number: ";
    cin >> num2;

    if (num2 == num1 * num1)
    {
        cout << "Second number is the square of first number.";
    }
    else
    {
        cout << "Second number is not the square of first number.";
    }

    return 0;
}