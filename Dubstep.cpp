#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool first = true;
    for (int i = 0; i < s.size(); )
    {
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB")
        {
            i += 3;
        }
        else
        {
            if (!first && i >= 3 && s.substr(i - 3, 3) == "WUB")
                cout << " ";
            cout << s[i];
            first = false;
            i++;
        }
    }
    return 0;
}
