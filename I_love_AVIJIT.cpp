#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,mx,mn;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mx=arr[0];
    mn=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<mn)
        {
            mn=arr[i];
            cnt++;
        }
        else if(arr[i]>mx)
        {
            mx=arr[i];
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
