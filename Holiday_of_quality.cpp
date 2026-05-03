#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n==1) cout<<0;
    else {
        vector<int>v(n);
        int max=0;
        for (int i=0;i<n;i++) 
        {
            cin>>v[i];
            if (v[i]>max) max=v[i];
        }
        int ans=0;
        for (int i=0;i<n;i++) 
        {
            if (v[i]!=max) 
            {
                ans+=(max-v[i]);
            }
        }
        cout<<ans;
    }
    return 0;
}