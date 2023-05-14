#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

    while (true)
    {
        cout << "Enter the number: ";
        int base;
        cin >> base;

        cout << "Enter the number: ";
        int exp;
        cin >> exp;

        int sum;
        sum = base + exp;
        cout << "Sum = " << sum << "\n";
        break;
    }
    while (true)
    {
        cout << "Enter the base 1: ";
        int num1;
        std::cin >> num1;

        cout << "Enter the base 2: ";
        int num2;
        std::cin >> num2;
        int sum;

        sum = num1 + num2;

        cout << "Enter the exponent: ";
        double exp;
        std::cin >> exp;

        cout << sum << "^" << exp << " = " << pow(sum, exp) << "\n";
        break;
    }
    while (true)
    {
        int sum = 0;

        for (int i = 1; i <= 1000; i++) {
            sum += i;
        }

        float mean = (float)sum / 1000;

        cout << "The mean of 1 to 1000 is: " << mean << endl;
        break;
    }
    while (true)
    {
        int a, product = 1;

        cout << "Enter a value for a: ";
        cin >> a;

        for (int i = a; i <= 20; i++) {
            product *= i;
        }

        cout << "The product of integers from " << a << " to 20 is: " << product << endl;

        break;
    }
    while (true)
    {
        int k;

        cout << "Enter the value of k: ";
        cin >> k;

        for (int i = 2; i <= 10; i++) {
            cout << k << " x " << i << " = " << k * i << endl;
        }

        break;
    }
    return 0;
}
