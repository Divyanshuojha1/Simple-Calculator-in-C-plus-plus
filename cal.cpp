[2:27 AM, 7 / 7 / 2023] Dev : #include<iostream>
#include <string>
#include <sstream>
                              using namespace std;

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        throw runtime_error("Error: division by zero");
    }
    return a / b;
}

int main()
{
    float num1, num2, result;
    string input, op;

    cout << "Enter an arithmetic expression: ";
    getline(cin, input);
    stringstream ss(input);

    ss >> num1;
    while (ss >> op >> num2)
    {
        try
        {
            if (op == "+")
            {
                result = add(num1, num2);
            }
            else if (op == "-")
            {
                result = subtract(num1, num2);
            }
            else if (op == "*")
            {
                result = multiply(num1, num2);
            }
            else if (op == "/")
            {
                result = divide(num1, num2);
            }
            else
            {
                throw runtime_error("Error: invalid operator");
            }
        }
        catch (const exception &e)
        {
            cout << e.what() << endl;
            return 1;
        }
        num1 = result;
    }

    cout << "Result: " << result << endl;
    return 0;
}

This program uses a `stringstream` to parse an arithmetic expression entered by the user, then evaluates each operation in order using functions for addition, subtraction, multiplication, and division. The program includes error handling to prevent division by zero or invalid operators, and uses exceptions to gracefully handle errors and exit the program.
[2:27 AM, 7/7/2023] Dev: Sure! Here's a simple calculator program in C++ that can perform basic arithmetic operations:

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            cout << "Error: division by zero" << endl;
            return 1;
        }
        break;
    default:
        cout << "Error: invalid operator" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
