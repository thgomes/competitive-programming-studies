#include <iostream>

using namespace std;

int main()
{
    long long t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if ((a % 2 != 0 && b % 2 != 0) || ((a * 2 == b && a % 2 != 0) || (b * 2 == a && b % 2 != 0)))
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}