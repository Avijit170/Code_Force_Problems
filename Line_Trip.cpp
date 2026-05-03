#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,maxi=0;
        cin>>n>>x;
        vector<int>v(n+1);
        v[0]=0;
        for (int i=1;i<n+1;i++)
        {
            cin>>v[i];
            if(v[i]-v[i-1]>maxi) maxi=v[i]-v[i-1];
        }
        int dis=2*(x-v[n]);
        int ans=max(maxi,dis);
        cout<<ans<<"\n";
    }
    return 0;
}