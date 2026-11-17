#include <iostream>
using namespace std;

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int n = 1; n <= i; n++) {
            cout << "* " ;
        }
        cout << endl;
    }

    return 0;
}