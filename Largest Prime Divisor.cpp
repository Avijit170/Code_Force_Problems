#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    while (cin>>t && t!=0) {
        if(t<0) t=-t;
        long long tem=t;
        long long mx=-1;
        int cnt=0;
        for (long long i=2;i*i<=tem;i++) {
            if (tem%i==0) {
                cnt++;
                mx=i;
                while (tem%i==0) {
                    tem/=i;
                }
            }
        }

        if (tem>1) {
            cnt++;
            mx=tem;
        }
        if (cnt>1) {
            cout<<mx<<"\n";
        } else {
            cout<<-1<< "\n";
        }
    }
    return 0;
}
