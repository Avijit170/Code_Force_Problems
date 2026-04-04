#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int>s;
    int arr[2*n-1];
    for(int i=0;i<2*n-1;i++)
    {
        cin>>arr[i];
    }
    for(auto x:arr)
    {
        s.insert(x);
    }
    if(s.size()==n)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }
    return 0;
}
