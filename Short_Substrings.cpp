#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string b;
        cin >> b;
        string ans = "";
        ans += b[0];
        for (int i = 1; i < b.size(); i += 2)
            ans += b[i];
        cout << ans << '\n';
    }

    return 0;
}