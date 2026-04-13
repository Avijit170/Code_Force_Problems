#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    vector<char>v;
    for(char x:s)
    {
        if(x=='+')
            continue;
        else
            v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<v[0];
    for(int i=1;i<v.size();i++)
    {
        cout<<"+"<<v[i];
    }
    return 0;
}