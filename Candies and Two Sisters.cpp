#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            cout<<x/2-1<<endl;
        }
        else
            cout<<x/2<<endl;
    }
    return 0;
}
