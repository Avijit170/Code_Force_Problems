#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long a,b;
        cin>>a>>b;

        if(a % b == 0)
        {
            cout<<0<<endl;
        }
        else
        {
            long long remainder = a % b;
            cout<< b - remainder <<endl;
        }
    }
    return 0;
}
