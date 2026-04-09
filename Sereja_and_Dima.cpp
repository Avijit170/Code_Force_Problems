#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i= 0; i < n; i++) {
        cin >> v[i];
    }
    int sum1 = 0, sum2 = 0;
    int left = 0, right = n - 1;

    for (int i = 0; i < n; i++) {
        int y = v[left];
        int z = v[right];
        int mx;
        if (y >= z) {
            mx = y;
            left++;
        } 
        else {
            mx = z;
            right--;
        }

        if (i % 2 == 0) {
            sum1 += mx;
        } 
        else {
            sum2 += mx;
        }
    }
    cout << sum1 << " " << sum2;
    return 0;
}
