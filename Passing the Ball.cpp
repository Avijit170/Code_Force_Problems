#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        for(int i = 0; i < n-1; i++)
        {
            if(s[i] == 'R' && s[i+1] == 'L')
            {
                cout << i + 2 << "\n";
                break;
            }
        }
    }
}
