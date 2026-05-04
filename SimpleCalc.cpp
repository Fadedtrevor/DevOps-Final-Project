#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "Welcome to a simple calculator" << endl;

    bool calculating = true;

    while (calculating == true)
    {
        int choice;
        
        cout << "\n1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Leave" << endl;

        cout << "Please select an option: ";
        cin >> choice;

        if (choice == 1)
        {
            int num1, num2;

            cout << "\nEnter the first number: ";
            cin >> num1;

            if (cin.fail())
            {
                cout << "\nInvalid option enter an actual number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "\nEnter the second number: ";
            cin >> num2;

            if (cin.fail())
            {
                cout << "\nInvalid option enter an actual number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "\nThe result is: " << num1 + num2 << endl;
        }
        else if (choice == 2)
        {
            int num1, num2;

            cout << "\nEnter the first number: ";
            cin >> num1;

            if (cin.fail())
            {
                cout << "\nInvalid option enter an actual number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "\nEnter the second number: ";
            cin >> num2;

            if (cin.fail())
            {
                cout << "\nInvalid option enter an actual number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "\nThe result is: " << num1 - num2 << endl;
        }
        else if (choice == 3)
        {
            int num1, num2;

            cout << "\nEnter the first number: ";
            cin >> num1;

            if (cin.fail())
            {
                cout << "\nInvalid option enter an actual number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "\nEnter the second number: ";
            cin >> num2;

            if (cin.fail())
            {
                cout << "\nInvalid option enter an actual number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "\nThe result is: " << num1 * num2 << endl;
        }
        else if (choice == 4)
        {
            int num1, num2;

            cout << "\nEnter the first number: ";
            cin >> num1;

            if (cin.fail())
            {
                cout << "\nInvalid option enter an actual number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "\nEnter the second number: ";
            cin >> num2;

            if (cin.fail() || num2 == 0)
            {
                cout << "\nInvalid option enter an actual number." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            cout << "\nThe result is: " << num1 / num2 << endl;
        }
        else if (choice == 5)
        {
            calculating = false;
            cout << "\nGoodbye" << endl;
        }
        else
        {
            cout << "\nInvalid option enter a number 1-5." << endl;
        }
    }
}