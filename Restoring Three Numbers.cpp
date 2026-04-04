#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,z,a,b,c;
    cin>>x>>y>>z>>n;
    int mx=max({x,y,z,n});
    if(mx==n)
    {
        a=n-x;
        b=n-y;
        c=n-z;
    }
    else if(mx==x)
    {
        a=x-n;
        b=x-y;
        c=x-z;
    }
    else if(mx==y)
    {
        a=y-n;
        b=y-x;
        c=y-z;
    }
    else if(mx==z)
    {
        a=z-n;
        b=z-y;
        c=z-x;
    }
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}



