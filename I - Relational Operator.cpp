#include<iostream>
using namespace std;
int main ()
{
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a<b)cout<<"<"<<endl;
        else if(b<a)cout<<">"<<endl;
        else cout<<"="<<endl;
    }
}


