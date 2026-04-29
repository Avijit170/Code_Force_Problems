#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        bool sorted = true;
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
            if (i > 0 && a[i] < a[i - 1]) 
                sorted = false;
        }
        if (k > 1 || sorted) 
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}