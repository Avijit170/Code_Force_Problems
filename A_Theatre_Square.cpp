#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,a;
    cin>>m>>n>>a;
    long long ans=0;
    long long x=(m+a-1)/a;
    long long y=(n+a-1)/a;
    ans=x*y;
    cout<<ans<<endl;
    return 0;
}