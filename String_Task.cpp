#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for(auto &c : s)
    {
        if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u' && c!='y' && c!='Y' &&
           c!='A' && c!='E' && c!='I' && c!='O' && c!='U')
        {
            cout << "." << (char)tolower(c);
        }
    }
    return 0;
}