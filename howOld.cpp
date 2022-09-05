#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int d1, d2, m1, m2, y1, y2;
        char c;
        cin >> d1 >> c >> m1 >> c >> y1;
        cin >> d2 >> c >> m2 >> c >> y2;
        int age = y1 - y2;
        if (m1 < m2)
        {
            age--;
        }
        else if (m1 == m2)
        {
            if (d1 < d2)
            {
                age--;
            }
        }
        if (age < 0)
        {
            cout << "Case #" << i + 1 << ": Invalid birth date" << endl;
        }
        else if (age > 130)
        {
            cout << "Case #" << i + 1 << ": Check birth date" << endl;
        }
        else
        {
            cout << "Case #" << i + 1 << ": " << age << endl;
        }
    }

    return 0;
}