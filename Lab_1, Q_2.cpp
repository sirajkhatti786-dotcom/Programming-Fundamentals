#include <iostream>
using namespace std;

int main()
{
int Num1, Num2;
float addition, substraction, multiplication, division;

cout << "Enter Num1:";
cin >> Num1;
cout << "Enter Num2:";
cin >> Num2;


addition = Num1+Num2;
substraction = Num1-Num2;
multiplication = Num1*Num2;
division = Num1/Num2;

cout << "Addition: " << addition << endl;
cout << "substraction: " << substraction << endl;
cout << "Multiplication: " << multiplication << endl;
cout << "Division: " << division << endl;
  
return 0;
}