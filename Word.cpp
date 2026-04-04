#include <bits/stdc++.h>
using namespace std;

int main() {
    int up=0,lo=0,si;
    string s;
    cin>>s;
    si=s.size();
    for(auto x:s)
    {
        if(isupper(x))
            up++;
        else
            lo++;
    }
    if(up<=lo)
    {
            for (char &c : s)
            {
                c =tolower(c);
            }
            cout<<s;
    }
    else
    {
        for (char &c : s)
            {
                c =toupper(c);
            }
            cout<<s;
    }
    return 0;
}
