// Beg4
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
            int square1 = num1 * num1;
            int square2 = num2 * num2;
            int cube1 = num1 * num1 * num1;
            int cube2 = num2 * num2 * num2;
            string evenOdd1 = (num1 % 2 == 0) ? "even" : "odd";
            string evenOdd2 = (num2 % 2 == 0) ? "even" : "odd";
            // Print the results
            cout << "Sum: " << sum << endl;
            cout << "Difference: " << difference << endl;
            cout << "Product: " << product << endl;
            cout << "Quotient: " << quotient << endl;
            cout << "Modulus: " << modulus << endl;
            cout << "Square of " << num1 << ": " << square1 << endl;
            cout << "Square of " << num2 << ": " << square2 << endl;
            cout << "Cube of " << num1 << ": " << cube1 << endl;
            cout << "Cube of " << num2 << ": " << cube2 << endl;
            cout << num1 << " is " << evenOdd1 << endl;
            cout << num2 << " is " << evenOdd2 << endl;
        }
        catch (const exception &e)
        {
            cerr << "Error: " << e.what() << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}
