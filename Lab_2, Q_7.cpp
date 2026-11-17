#include <iostream>
using namespace std;

int main()
{
    int Math, PF, DS, AF, ICT;
    float total, percentage;

    cout << "Enter marks of Math: ";
    cin >> Math;

    cout << "Enter marks of Programming Fundamentals: ";
    cin >> PF;

    cout << "Enter marks of Discrete Structure: ";
    cin >> DS;

    cout << "Enter marks of Applied physics: ";
    cin >> AF;

    cout << "Enter marks of ICT: ";
    cin >> ICT;

    total = Math + PF + DS + AF + ICT;
    percentage = (total / 500) * 100;

    cout << "Total Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}