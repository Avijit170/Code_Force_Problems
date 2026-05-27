#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long L = 0;
        for (int i=0; i<n-1; i++)
        {
            if (a[i] > a[i + 1])
            {
                L = max(L, a[i] - a[i + 1]);
            }
        }
        vector<int> x(n, -1);
        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                if (x[i] == 1) ok = false;
                if (x[i + 1] == 0) ok = false;
                x[i] = 0;
                x[i + 1] = 1;
            }
        }
        bool changed = true;
        while (changed && ok)
        {
            changed = false;
            for (int i = 0; i < n - 1; i++)
            {

                if (a[i + 1] - a[i] < L)
                {
                    if (x[i] == 1 && x[i + 1] == 0)
                        ok = false;
                    if (x[i] == 1 && x[i + 1] == -1)
                    {
                        x[i + 1] = 1;
                        changed = true;
                    }
                    if (x[i + 1] == 0 && x[i] == -1)
                    {
                        x[i] = 0;
                        changed = true;
                    }
                }
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
