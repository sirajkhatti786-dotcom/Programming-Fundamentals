#include <iostream>
using namespace std;

int main()
{
    int Marks;

    cout << "Enter test score: ";
    cin >> Marks;

    if (Marks >= 90)
    {
        cout << "Grade: A";
    }
    else if (Marks >= 80)
    {
        cout << "Grade: B";
    }
    else if (Marks >= 70)
    {
        cout << "Grade: C";
    }
    else if (Marks >= 60)
    {
        cout << "Grade: D";
    }
    else
    {
        cout << "Grade: F";
    }

    return 0;
}