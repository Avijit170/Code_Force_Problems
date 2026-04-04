#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,cnt=0;
    cin>>n;
    stack<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(s.empty()||s.top()!=x)
        {
            s.push(x);
        }
    }
    cout<<s.size();
    return 0;
}
