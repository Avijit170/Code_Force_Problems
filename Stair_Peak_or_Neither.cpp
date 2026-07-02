#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(b>a&&c>b)
        {
            cout<<"STAIR"<<endl;
        }
        else if(b>a&&c<b)
        {
            cout<<"PEAK"<<endl;
        }
        else
        {
            cout<<"NONE"<<endl;
        }
    }
}