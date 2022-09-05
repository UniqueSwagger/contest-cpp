#include <iostream>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
        {
            break;
        }
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            int j = 1;
            while (j * j < i)
            {
                j++;
            }
            if (j * j == i)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}