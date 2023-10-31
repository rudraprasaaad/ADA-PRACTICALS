#include <iostream>
using namespace std;
int factorial_recursive(int n)
{
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return (n)*factorial_recursive(n - 1);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial of " << n << " (recursive method) is " << factorial_recursive(n) << endl;

    return 0;
}
