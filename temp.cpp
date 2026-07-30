#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve_squire()
{
    ll n;
    cin >> n;
    ll i = 0;
    ll j = sqrt(n);
    bool isfound = false;

    while (i <= j)
    {
        ll sum = i * i + j * j;
        if (sum == n)
        {
            isfound = true;
            break;
        }
        else if (sum > n)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    if (isfound)
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
        solve_squire();
    }
    return 0;
}
