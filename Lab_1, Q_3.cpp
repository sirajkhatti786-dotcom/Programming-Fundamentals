#include <iostream>
using namespace std;

int main() {
    double miles, kilometres;

    cout << "Enter distance in miles: ";
    cin >> miles;

  
    kilometres = miles * 1.069;

    cout << "Distance in kilometres: " << kilometres << endl;

    return 0;
}
