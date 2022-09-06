#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            // if n is 0, then we are done
            break;
        }
        int sum = 0; // initialize the sum to 0
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
            // what will be the sum if n=47?
            // sum = 0 + 47 % 10 = 7
            // n= 47/10= 4
            // sum= 7 + 4 % 10= 11
            // n= 4/10= 0
        }
        while (sum > 9)
        {
            // current sum is 11 which is greater than 9 so we need to sum the digits of 11
            int ultimateSum = 0;
            while (sum > 0)
            {
                ultimateSum += sum % 10;
                sum /= 10;
                // what will be the sum if sum=11?
                // ultimateSum = 0 + 11 % 10 = 1
                // sum= 11/10= 1
                // ultimateSum = 1 + 1 % 10= 2
                // sum= 1/10= 0
            }
            sum = ultimateSum;
        }
        cout << sum << endl;
    }
    return 0;
}