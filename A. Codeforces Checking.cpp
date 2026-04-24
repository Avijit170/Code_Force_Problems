#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c;
    while (n--)
    {
        cin>>c;
        if(c=='c' || c=='e' || c=='d'||c=='o' || c=='f' || c=='r'|| c=='s')
        {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    
    return 0;
}