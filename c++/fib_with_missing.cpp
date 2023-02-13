// WAP to generate fibonacci series upto user limit along with that write all the missing terms
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number upto the terms You want of fibonacci series" << endl;
    cin >> n;
    cout << "Fibonacci series till asked is below :- " << endl;
    int a[n];
    a[0] = 0;
    a[1] = 1;
    for (int j = 2; j <= (n - 1); j++)
    {
        a[j] = a[j - 1] + a[j - 2];
    }
    for (int i = 0; i <= (n - 1); i++)
    {
        cout << a[i];
        cout << " ";
    }
    cout << endl;
    cout << "Printing the missing terms :- " << endl;
    for (int i = 0; i <= (n - 2); i++)
    {
        if (a[i + 1] - a[i] > 1)
        {
            for (int k = 1; k < a[i + 1] - a[i]; k++)
                cout << a[i] + k << " ";
        }
    }
    return 0;
}