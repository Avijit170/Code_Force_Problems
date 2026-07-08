#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long anna=a+(c+1)/2;
        long long katie=b+c/2;
        if(anna>katie)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;
    }
    return 0;
}
