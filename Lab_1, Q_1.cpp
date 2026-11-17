#include <iostream>
using namespace std;

int main (){

    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Your age in months is: " << age*12 << endl;
    cout << "Your age in days is: " << age * 365 << endl;
}