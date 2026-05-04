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

    }
}