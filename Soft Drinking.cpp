#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int intu=(k*l)/nl;
    int intu2=c*d;
    int eno=p/np;
    int ans=min({intu,intu2,eno})/n;
    cout<<ans;
    return 0;
}



