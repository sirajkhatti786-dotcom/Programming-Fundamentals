#include <iostream>
using namespace std;

int main (){
    int num, sum=0, numL, rev=0;

    cout << "Enter number" << endl;
    cin >> num;
    
    while (num != 0){
        numL = num % 10; 
        sum = sum + numL;
        rev = rev * 10 + numL;
        num = num/10;

    }
    cout << "The sum of the number is: " << sum <<endl;
    cout << "The sum of the number is: " << rev <<endl;

}