#include <iostream>
using namespace std;

int main() {
    int totalstudents;
    double feestudent, totalfee;

    
    cout << "Enter total number of students in the class: ";
    cin >> totalstudents;

    cout << "Enter fee per student: ";
    cin >> feestudent;

   
    totalfee = totalstudents * feestudent;


    cout << "Total fee collected: " << totalfee << endl;

    return 0;
}
