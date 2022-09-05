#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    while (cin >> s)
    {
        bool flag = false;
        for (int i = 0; i < s.size() + 1 && !flag; i++)
        {
            for (int j = 'a'; j < 'z' + 1 && !flag; j++)
            {
                string t = s.substr(0, i) + string(1, j) + s.substr(i);
                string u = t;
                reverse(u.begin(), u.end());
                if (t == u)
                {
                    flag = true;
                    cout << t << endl;
                    break;
                }
            }
        }
        if (!flag)
            cout << "NA" << endl;
    }
    return 0;
}