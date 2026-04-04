#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%3==0)cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}

