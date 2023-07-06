#include<iostream>
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


}
