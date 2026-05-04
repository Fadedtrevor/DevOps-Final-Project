#include <iostream>
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

            cout << "\nEnter the second number: ";
            cin >> num2;

            cout << "\nThe result is: " << num1 + num2 << endl;
        }
        else if (choice == 2)
        {
            int num1, num2;

            cout << "\nEnter the first number: ";
            cin >> num1;

            cout << "\nEnter the second number: ";
            cin >> num2;

            cout << "\nThe result is: " << num1 - num2 << endl;
        }
        else if (choice == 3)
        {
            int num1, num2;

            cout << "\nEnter the first number: ";
            cin >> num1;

            cout << "\nEnter the second number: ";
            cin >> num2;

            cout << "\nThe result is: " << num1 * num2 << endl;
        }
        else if (choice == 4)
        {
            int num1, num2;

            cout << "\nEnter the first number: ";
            cin >> num1;

            cout << "\nEnter the second number: ";
            cin >> num2;

            if (num2 != 0)
            {
                cout << "\nThe result is: " << num1 / num2 << endl;
            }
            else
            {
                cout << "\nError: Division by zero is not allowed." << endl;
            }
        }
        else if (choice == 5)
        {
            calculating = false;
            cout << "\nGoodbye" << endl;
        }
        else
        {
            cout << "\nInvalid option. Please try again." << endl;
        }
    }
}