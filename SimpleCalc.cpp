#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to a simple calculator" << endl;

    bool calculating = true;

    while (calculating == true)
    {
        int choice;
        
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Leave" << endl;

        cout << "Please select an option: ";
        cin >> choice;

        if (choice == 1)
        {
            int num1, num2;

            cout << "Enter the first number: ";
            cin >> num1;

            cout << "Enter the second number: ";
            cin >> num2;

            cout << "The result is: " << num1 + num2 << endl;
        }
        else if (choice == 2)
        {
            int num1, num2;

            cout << "Enter the first number: ";
            cin >> num1;

            cout << "Enter the second number: ";
            cin >> num2;

            cout << "The result is: " << num1 - num2 << endl;
        }
    }
}