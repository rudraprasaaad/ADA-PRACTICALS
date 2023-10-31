#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }
    int count = 0;
    int result = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        result *= i;
        count++;
    }
    cout << "{for (int i = 1; i <= n; i++)}: " << i << endl;
    cout << "{ result *= i;} : " << count << endl;
    cout << "Factorial is: " << result << endl;
    return 0;
}