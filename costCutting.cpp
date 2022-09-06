#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b && a < c || a < b && a > c)
            cout << "Case " << i + 1 << ": " << a << endl;
        else if (b > a && b < c || b < a && b > c)
            cout << "Case " << i + 1 << ": " << b << endl;
        else
            cout << "Case " << i + 1 << ": " << c << endl;
    }

    return 0;
}