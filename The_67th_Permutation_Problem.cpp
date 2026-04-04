#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cin>>p;

    while(p--)
    {
        int n;
        cin >> n;
        vector<int> v;
        int i = 1, m = 3 * n;
        while (i<=m)
        {
            if (m-i+ 1 >= 3)
            {
                v.push_back(i);
                v.push_back(m - 1);
                v.push_back(m);

                i++;
                m-= 2;
            }
        }
        for (int x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}