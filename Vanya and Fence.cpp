#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,sum=0;
    cin>>n>>h;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(auto x:arr)
    {
        if(x<=h)
        {
            sum=sum+1;
        }
        else if(x>h)
        {
            sum=sum+2;
        }
    }
    cout<<sum;
    return 0;
}

