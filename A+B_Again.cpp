#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        int a;
        cin>>a;
        int n1=a%10;
        sum+=n1;
        int n2=a/10;
        sum+=n2;
        cout<<sum<<endl;
    }
    return 0;
}