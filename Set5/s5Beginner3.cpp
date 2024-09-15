// Beg3
#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int num1, num2;
    string input;
    while (true)
    {
        try
        {
            cout << "Enter first integer (type 'exit' to quit): ";
            cin >> input;
            if (input == "exit")
            {
                cout << "Exiting the program." << endl;
                break;
            }
            num1 = stoi(input);
            cout << "Enter second integer: ";
            cin >> input;
            num2 = stoi(input);
            if (num2 == 0)
            {
                throw runtime_error("Error: Division by zero is not allowed.");
            }
            int sum = num1 + num2;
            int difference = num1 - num2;
            int product = num1 * num2;
            int quotient = num1 / num2;
            int modulus = num1 % num2;
            cout << "Sum: " << sum << endl;
            cout << "Difference: " << difference << endl;
            cout << "Product: " << product << endl;
            cout << "Quotient: " << quotient << endl;
            cout << "Modulus: " << modulus << endl;
        }
        catch (const exception &e)
        {
            cerr << "Error: " << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}
