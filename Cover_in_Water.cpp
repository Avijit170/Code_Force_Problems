#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0,i=0;
        bool ok=false;
        while (i < n) 
        {
            if (s[i] == '#') 
            {
                i++;
                continue;
            }
            int len = 0;
            while (i < n && s[i] == '.') 
            {
                len++;
                i++;
            }
            if (len >= 3) ok = true;
            else ans += len;
        }
        if(ok)
            cout<<2<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}