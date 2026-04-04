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
        cin >> n;

        vector<int> a(n);
        for(int &x : a) cin >> x;

        int mx = 0;
        int ans = 0;

        for(int i = n-1; i >= 0; i--)
        {
            if(a[i] > mx)
            {
                ans++;
                mx = a[i];
            }
        }

        cout << ans << "\n";
    }
}
