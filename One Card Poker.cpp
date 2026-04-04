#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<int, int> counts;
    int max_freq = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        counts[a]++;
        max_freq = max(max_freq, counts[a]);
    }
    cout << max_freq << endl;
    return 0;
}
