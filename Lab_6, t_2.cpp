
#include <iostream>
using namespace std;

int main()
{
    int num, total, i;
    char choice;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter total multiples: ";
    cin >> total;

    cout << "Enter e for even or o for odd: ";
    cin >> choice;

    for(i = 1; i <= total; i++)
    {
        if(choice == 'e' && i % 2 == 0)
        {
            cout << num << " * " << i << " = " << num * i << endl;
        }
        else if(choice == 'o' && i % 2 != 0)
        {
            cout << num << " * " << i << " = " << num * i << endl;
        }
    }

    return 0;
}
