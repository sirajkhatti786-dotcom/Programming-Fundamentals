
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int choice;
    int a, b;
    float x, y;
    float result;

    do
    {
        cout << "\n===== CALCULATOR MENU =====" << endl;
        cout << "1. Addition of Integers" << endl;
        cout << "2. Subtraction of Integers" << endl;
        cout << "3. Multiplication of Integers" << endl;
        cout << "4. Division of Integers" << endl;
        cout << "5. Addition of Float Numbers" << endl;
        cout << "6. Subtraction of Float Numbers" << endl;
        cout << "7. Multiplication of Float Numbers" << endl;
        cout << "8. Division of Float Numbers" << endl;
        cout << "9. Sine" << endl;
        cout << "10. Cosine" << endl;
        cout << "11. Tangent" << endl;
        cout << "12. Square Root" << endl;
        cout << "13. Square" << endl;
        cout << "14. Cube" << endl;
        cout << "15. Exit" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter two integers: ";
                cin >> a >> b;
                cout << "Result = " << a + b;
                break;

            case 2:
                cout << "Enter two integers: ";
                cin >> a >> b;
                cout << "Result = " << a - b;
                break;

            case 3:
                cout << "Enter two integers: ";
                cin >> a >> b;
                cout << "Result = " << a * b;
                break;

            case 4:
                cout << "Enter two integers: ";
                cin >> a >> b;

                if(b != 0)
                    cout << "Result = " << (float)a / b;
                else
                    cout << "Division by zero is not allowed.";

                break;

            case 5:
                cout << "Enter two floating numbers: ";
                cin >> x >> y;
                cout << "Result = " << x + y;
                break;

            case 6:
                cout << "Enter two floating numbers: ";
                cin >> x >> y;
                cout << "Result = " << x - y;
                break;

            case 7:
                cout << "Enter two floating numbers: ";
                cin >> x >> y;
                cout << "Result = " << x * y;
                break;

            case 8:
                cout << "Enter two floating numbers: ";
                cin >> x >> y;

                if(y != 0)
                    cout << "Result = " << x / y;
                else
                    cout << "Division by zero is not allowed.";

                break;

            case 9:
                cout << "Enter angle in radians: ";
                cin >> x;
                cout << "Sine = " << sin(x);
                break;

            case 10:
                cout << "Enter angle in radians: ";
                cin >> x;
                cout << "Cosine = " << cos(x);
                break;

            case 11:
                cout << "Enter angle in radians: ";
                cin >> x;
                cout << "Tangent = " << tan(x);
                break;

            case 12:
                cout << "Enter a number: ";
                cin >> x;

                if(x >= 0)
                    cout << "Square Root = " << sqrt(x);
                else
                    cout << "Invalid input for square root.";

                break;

            case 13:
                cout << "Enter a number: ";
                cin >> x;
                cout << "Square = " << x * x;
                break;

            case 14:
                cout << "Enter a number: ";
                cin >> x;
                cout << "Cube = " << x * x * x;
                break;

            case 15:
                cout << "Calculator closed.";
                break;

            default:
                cout << "Invalid choice! Try again.";
        }

        cout << endl;

    } while(choice != 15);

    return 0;
}
