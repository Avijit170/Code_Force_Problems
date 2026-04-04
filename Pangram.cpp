#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(auto& x:s)
    {
        x=tolower(x);
    }
    set<char>set1(s.begin(),s.end());
    int s1=set1.size();
    if(s1==26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}

