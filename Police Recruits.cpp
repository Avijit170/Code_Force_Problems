#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    stack<int>s;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(auto x:arr)
    {
        if(x!=-1)
        {
            for(int j=0;j<x;j++)
            {
                s.push(1);
            }
        }
        else if(x==-1&& !s.empty())
        {
            s.pop();
        }
        else
            cnt++;
    }
    cout<<cnt;
    return 0;
}

