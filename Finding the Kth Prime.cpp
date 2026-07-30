#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    const int a=86028121;
    vector<int>pr;
    vector<bool>prime(a+1,true);
    prime[0]=false;
    prime[1]=false;
    for (int i=2;i*i<=a;i++)
    {
        if (prime[i])
        {
            for (int j=i*i;j<=a;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    for (int i=2;i<=a;i++)
    {
        if (prime[i])
        {
            pr.push_back(i);
        }
    }
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin>>n;
        cout<<pr[n-1]<<endl;
    }
    return 0;
}
