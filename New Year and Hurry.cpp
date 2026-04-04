#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,time=0,cnt=0;
    cin>>n>>t;
    int it=240-t;
    for(int i=1;i<=n;i++)
    {
        time=time+5*i;
        if(time<=it)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}

