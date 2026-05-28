#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int,int>m;
    vector<int>v;
    unordered_set<int>u;
    int n;
    while (cin>>n)
    {
        m[n]++;
        if (u.find(n) == u.end())
        {
            u.insert(n);
            v.push_back(n);
        }
    }
    for(auto x : v)
    {
        cout<<x<<" "<<m[x]<<endl;
    }
    return 0;
}

