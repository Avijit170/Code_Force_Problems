#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int n1 = 0, n2 = n - 1;
        while (n1 < n2)
        {
            if (s[n1] != s[n2])
            {
                n1++;
                n2--;
            }
            else
            {
                break;
            }
        }
        if (n1 > n2)
            cout << 0 << endl;
        else
            cout << n2 - n1 + 1 << endl;
    }
    return 0;
}