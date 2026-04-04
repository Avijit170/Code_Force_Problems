#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,n,mini=0,maxi=0;
    vector<int>v;
    cin>>num;
    while(num>0)
    {
        n=num%10;
        v.push_back(n);
        num=num/10;
    }
    sort(v.begin(),v.end());
    for(auto x:v)
    {
        mini=mini*10+x;
    }
    reverse(v.begin(),v.end());
    for(auto x:v)
    {
        maxi=maxi*10+x;
    }
    cout<<maxi+mini;
    return 0;
}

