#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        int maxLen = 0, cnt = 0;
        for (int i = 0; i < n; i++) 
        {
            int x;
            cin >> x;
            if (x == 0) 
            {
                cnt++;
                if (cnt > maxLen)
                    maxLen = cnt;
            } 
            else 
                cnt = 0;
        }
        cout << maxLen << "\n";
    }
    return 0;
}