#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        while (sum > 9)
        {
            int temp = 0;
            while (sum > 0)
            {
                temp += sum % 10;
                sum /= 10;
            }
            sum = temp;
        }
        cout << sum << endl;
    }
    return 0;
}