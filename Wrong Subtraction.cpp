#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,num;
    cin>>num>>n;
    for(int i=0;i<n;i++)
    {
        if(num%10==0)
        {
            num=num/10;
        }
        else
            num=num-1;
    }
    cout<<num;
    return 0;
}

