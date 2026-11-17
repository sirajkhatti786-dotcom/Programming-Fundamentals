#include <iostream>
using namespace std;

int main()
{
   int temp;

    cout<<"Enter Today's Temprature";
    cin>>temp;

    if (temp > 35)
    {
            cout<<"It is hot today";
    }

    else if (temp >= 25)
    {
        cout << "It is a pleasant day.";
    }
    
    else
    {
        cout << "It is a cool day.";
    }
    return 0;
}