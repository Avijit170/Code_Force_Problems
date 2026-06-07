#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a;
    cin >> a;
    while (a--) 
    {
        int n;
        cin >> n;
        vector<long long> b(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> b[i];
        }
        sort(b.rbegin(), b.rend());
        bool possible = true;
        for (int i = 2; i < n; i++) {
            if (b[i] != b[i-2] % b[i-1]) 
            {
                possible = false;
                break;
            }
        }
        if (possible) {
            cout << b[0] << " " << b[1] << "\n";
        } 
        else {
            cout << -1 << "\n";
        }
    }
}