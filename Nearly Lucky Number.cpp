#include <bits/stdc++.h>
using namespace std;

bool isLucky(int x) {
    if (x == 0) return false;
    while (x > 0) {
        int d = x % 10;
        if (d != 4 && d != 7)
            return false;
        x /= 10;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;

    int cnt = 0;
    while (n > 0) {
        int d = n % 10;
        if (d == 4 || d == 7)
            cnt++;
        n /= 10;
    }

    if (isLucky(cnt))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
