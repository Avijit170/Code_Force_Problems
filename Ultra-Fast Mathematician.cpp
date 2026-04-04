#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    string result;
    int s3=s1.size();
    for(int i=0;i<s3;i++)
    {
        if(s1[i]==s2[i])
        {
            result.insert(result.size(),"0");
        }
        else if(s1[i]!=s2[i])
        {
            result.insert(result.size(),"1");
        }
    }
    cout<<result<<endl;
    return 0;
}
