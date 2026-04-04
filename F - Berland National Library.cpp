#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    string x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>0)
            cnt++;
    }
    cout<<n-cnt;
    return 0;
}

