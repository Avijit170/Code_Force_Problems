#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int>m;
    for(int i=0;i<n;i++)
    {
        int x,z;
        string y;
        cin>>x;
        if(x==1)
        {
            cin>>y>>z;
            if(m.find(y)!=m.end())
            {
                m[y]=m[y]+z;
            }
            else
                m.insert(make_pair(y,z));
        }
        else if(x==2)
        {
            cin>>y;
            m.erase(y);
        }
        else if(x==3)
        {
            cin>>y;
            if(m.find(y)!=m.end())
            {
                cout<<m[y]<<endl;
            }
            else cout<<0<<endl;
        }
    }
    return 0;
}


