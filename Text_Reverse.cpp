#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string s;
        getline(cin,s);
        stringstream s1(s);
        string s2;
        while(s1>>s2)
        {
            reverse(s2.begin(),s2.end());
            cout<<s2<<" ";
        }
        cout<<endl;
    }
    return 0;
}

