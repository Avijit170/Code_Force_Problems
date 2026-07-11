#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    set<char>st;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            auto search=st.find(s[i]);
            if(search==st.end()||st.empty())
            {
                st.insert(s[i]);
                cnt=cnt+2;
            }
            else
            {
                cnt=cnt+1;
            }
        }
        cout<<cnt<<endl;
        st.clear();
    }
    return 0;
}