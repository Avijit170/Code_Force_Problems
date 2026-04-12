#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, target = "hello";
    cin >> s;
    int j = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == target[j])
        {
            j++;
        }
        if(j == target.size())
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}