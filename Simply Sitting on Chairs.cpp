#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        vector<bool> marked(n + 1, false);
        int ans = 0;

        for (int i = 1; i <= n; i++) {
            if (marked[i]) break;

            if (p[i - 1] <= i) {
                ans++;
                marked[p[i - 1]] = true;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
