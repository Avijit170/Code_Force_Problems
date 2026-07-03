#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0,ans=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x+k<=5)
        {
            cnt++;
        }
    }
    ans = cnt/3;
    cout<<ans<<endl;
    return 0;
}