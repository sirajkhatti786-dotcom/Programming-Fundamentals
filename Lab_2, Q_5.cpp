#include <iostream>
using namespace std;

int main()
{
    int F, C;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> F;

    C = (5 / 9) * (F - 32);

    cout << "Temperature in Celsius = " << C << endl;

    return 0;
}