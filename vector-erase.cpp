#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int p;
    cin>>p;
    v.erase(v.begin()+(p-1));
    int y,z;
    cin>>y>>z;
    v.erase(v.begin()+(y-1),v.begin()+(z-1));
    cout<<v.size()<<endl;
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}

