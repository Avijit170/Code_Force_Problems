#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,a,b,c,d;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        if(a<b)cnt++;
        if(a<c)cnt++;
        if(a<d)cnt++;
        cout<<cnt<<endl;
        cnt=0;
    }
    return 0;
}



