#include <bits/stdc++.h>
using namespace std;

// custom gcd for C++14 or older
long long gcd(long long a, long long b){
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        // compute overall GCD
        long long overall_gcd = a[0];
        for(int i = 1; i < n; i++) overall_gcd = gcd(overall_gcd, a[i]);

        // case 1: entire array GCD is 1
        if(overall_gcd == 1){
            cout << n-1 << "\n";
            continue;
        }

        // case 2: all elements equal
        bool all_equal = true;
        for(int i = 1; i < n; i++){
            if(a[i] != a[0]){
                all_equal = false;
                break;
            }
        }
        if(all_equal){
            cout << 0 << "\n";
            continue;
        }

        // case 3: check middle elements
        int ans = 0;
        for(int i = 1; i < n-1; i++){
            long long g_all = gcd(gcd(a[i-1], a[i]), a[i+1]);
            long long g_skip = gcd(a[i-1], a[i+1]);
            if(g_all == g_skip) ans++;
        }

        cout << ans << "\n";
    }
    return 0;
}
