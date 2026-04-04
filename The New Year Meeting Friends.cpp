#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3;
    int n;
    cin>>x1>>x2>>x3;
    int max1=max({x1,x2,x3});
    int min1=min({x1,x2,x3});
    n=max1-min1;
    cout<<n;
    return 0;
}
