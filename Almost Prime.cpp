#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int cnt = 0;
    for (int i = 1; i <= t; i++)
    {
        int x = i;
        int temp = 0;
        for (int j = 2; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                temp++;
                while (x % j == 0)
                    x /= j;
            }
        }
        if (x > 1)
            temp++;
        if (temp == 2)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
