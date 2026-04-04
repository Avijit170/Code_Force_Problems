#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    set<int>uniqueSet={s1,s2,s3,s4};
    cout<<4-uniqueSet.size()<<endl;
    return 0;
}
