#include <iostream>
using namespace std;

string relationalOperator(int a, int b)
{
    return a > b ? ">" : a < b ? "<"
                               : "=";
}
int main()
{
    int t;
    cin >> t;
    string output[t];
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        output[i] = relationalOperator(a, b);
    }
    for (int i = 0; i < t; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}