#include<bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0) break;
        map<vector<int>, int> freq;
        for (int i = 0; i < n; i++)
        {
            vector<int> v(5);
            for (int j=0; j<5; j++) cin >> v[j];
            sort(v.begin(), v.end());
            freq[v]++;
        }
        int maxFreq = 0;
        for (auto &it : freq)
        {
            maxFreq = max(maxFreq, it.second);
        }
        int ans = 0;
        for (auto &it : freq)
        {
            if (it.second == maxFreq)
            {
                ans += it.second;
            }
        }
        cout << ans <<'\n';
    }
    return 0;
}
