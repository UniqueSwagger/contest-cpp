#include <iostream>
using namespace std;
int main()
{
    long int n, a;
    while (cin >> n)
    {
        if (n >= 0 && n <= 210000000)
        {
            a = ((n * (n + 1)) / 2) + 1;
            // number of straight lines = n and maximum number of slices= a
            // Now lets find the number of slices in each straight line and derive the formula
            // For 0 straight lines, number of slices= 1
            // For 1 straight lines, number of slices= 2
            // For 2 straight lines, number of slices= 4
            // For 3 straight lines, number of slices= 7
            // For 4 straight lines, number of slices= 11
            // For 5 straight lines, number of slices= 16
            // For n straight lines, number of slices= a
            // Now lets find the formula for a using the above values of n and a and derive the formula for a using the formula.
            // 1 = 0 * (0 + 1) / 2 + 1
            // 2 = 1 * (1 + 1) / 2 + 1
            // 4 = 2 * (2 + 1) / 2 + 1
            // 7 = 3 * (3 + 1) / 2 + 1
            // a = n * (n + 1) / 2 + 1
            cout << a << endl;
        }
        else if (n < 0)
            break;
    }
    return 0;
}