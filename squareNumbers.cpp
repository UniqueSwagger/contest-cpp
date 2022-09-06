#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            break;
        int count = 0;
        for (int i = a; i <= b; i++)
        {
            int squareRoot = sqrt(i); // i= 1 -> squareRoot= 1 , i=2 -> squareRoot= 1 , i=3 -> squareRoot= 1 , i=4 -> squareRoot= 2
            if (squareRoot * squareRoot == i)
            {
                // if i is a perfect square then we increment the count by 1.
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}