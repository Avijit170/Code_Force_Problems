#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)  cin>>a[i];

    int ans=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            cnt++;
        }
        else
        {
            ans=max(ans,cnt);
            cnt=1;
        }
    }
    ans=max(ans,cnt);
    cout<<ans<<endl;
    return 0;
}