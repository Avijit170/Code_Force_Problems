#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,even=0,odd=0,ans;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(even==1)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                ans = i+1;
                break;
            }
        }
        cout << ans << endl;
    }
    else if(odd==1)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                ans = i+1;
                break;
            }
        }
        cout << ans << endl;
    }
}