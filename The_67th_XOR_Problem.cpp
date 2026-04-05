#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int p;
    cin >> p;

    while(p--){
        int n;
        cin >> n;

        vector<long long> v(n);
        for(int i=0;i<n;i++) cin >> v[i];

        long long ans = 0;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                ans = max(ans, v[i] ^ v[j]);
            }
        }
        cout << ans << "\n";
    }
}