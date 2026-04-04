#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,n,w,b,cost=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        cost = cost+i*k;
    }

    if(cost>n)
    {
        b=cost-n;
        cout<<b;
    }
    else
        cout<<0;

    return 0;
}
