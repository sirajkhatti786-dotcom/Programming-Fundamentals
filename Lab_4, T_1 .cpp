#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a Character";
    cin >> ch;

    if (ch== 'a' || ch== 'A' || ch== 'e' || ch== 'E' || ch== 'i' || ch== 'I' || ch== 'o' || ch== 'O' || ch == 'u' || ch== 'U')
    {
            cout << "is a vowel";
    }

   else {
        cout << "is not vowel";
    }
    return 0;
}