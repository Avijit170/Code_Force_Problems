#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
        int t;
        cin>>t;
        for(int i=1;i<=t;i++)
        {
            cout<<2*i-1<<(i==t?"":" ");
        }
        cout<<endl;
    }
    return 0;
}