#include<bits/stdc++.h>
using namespace std;
 
long long MOD=998244353;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        long long n,m,r,c;
        cin>>n>>m>>r>>c;
 
        long long total=n*m;
        long long eq=(n-r+1)*(m-c+1);
        long long power=total-eq;
 
        long long ans=1;
        long long base=2;
 
        while(power>0)
        {
            if(power%2==1)
            {
                ans=(ans*base)%MOD;
            }
 
            base=(base*base)%MOD;
            power/=2;
        }
 
        cout<<ans<<"\n";
    }
 
    return 0;
}