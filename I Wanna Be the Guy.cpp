#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int passed[105]={0};
    int p;
    cin>>p;
    for(int i=0; i<p; i++)
    {
        int level;
        cin>>level;
        passed[level]=1;
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int level;
        cin>>level;
        passed[level]=1;
    }
    int can_pass_all=1;

    for(int i=1; i<=n; i++)
    {
        if(passed[i]==0)
        {
            can_pass_all=0;
            break;
        }
    }
   
    if(can_pass_all==1)
    {
        cout<<"I become the guy.\n";
    }
    else
    {
        cout<<"Oh, my keyboard!\n";
    }
}