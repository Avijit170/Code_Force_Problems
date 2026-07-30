#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve_quire()
{
    ll n;
    cin >> n;
    ll h = 0;
    ll k = sqrt(n);
    bool found = false;
    while (h <= k)
    {
        ll sum = h * h + k * k;
        if (sum == n)
        {
            found = true;
            break;
        }
        else if (sum > n)
        {
            k--;
        }
        else
        {
            h++;
        }
    }
    if (found)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve_quire();
    }
    return 0;
}
