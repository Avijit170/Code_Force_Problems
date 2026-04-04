#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,cnt1=0,cnt2=0;
    string si;
    cin>>s;
    cin>>si;
    for(auto x:si)
    {
        if(x=='A')
        {
            cnt1++;
        }
        else if(x=='D')
        {
            cnt2++;
        }
    }

    if(cnt1==cnt2)
        cout<<"Friendship";

    else if(cnt1>cnt2)
        cout<<"Anton";

    else
        cout<<"Danik";
    return 0;
}
