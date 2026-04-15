#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int maxH = *max_element(a.begin(), a.end());
    int minH = *min_element(a.begin(), a.end());
    int i = 0, j = 0;
    for (int k = 0; k < n; k++) {
        if (a[k] == maxH) {
            i = k;
            break;
        }
    }
    for (int k = n - 1; k >= 0; k--) {
        if (a[k] == minH) {
            j = k;
            break;
        }
    }
    int ans = i + (n - 1 - j);
    if (i > j) ans--;
    cout << ans << "\n";
    return 0;
}