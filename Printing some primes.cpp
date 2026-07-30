#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int N=1e8;
    vector<bool>prime(N,true);
    prime[0]=false;
    prime[1]=false;
    for (long long i=2;i*i<N;i++)
    {
        if (prime[i])
        {
            for (long long j=i*i;j<N;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    int cnt=0;
    for (int i=2;i<N;i++)
    {
        if (prime[i])
        {
            cnt++;
            if ((cnt-1)%100 == 0)
            {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
