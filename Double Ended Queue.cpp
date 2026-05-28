#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
       deque<int>d;
       int x,y;
       cin>>x>>y;
       while(y--)
       {
           string s;
           int t;
           cin>>s>>t;
           if(s=="pushLeft")
           {
               q.push_front(t);
               cout<<"Pushed in left: "<<t<<endl;
           }
           else if(s=="pushRight")
           {
               q.push_back(t);
               cout<<"Pushed in right: "<<t<<endl;
           }
           else if(s=="popRight")
           {
               int a=q.back()
               q.pop_back(t);
               cout<<"Popped from right: "<<a<<endl;
           }
           else if(s=="popLeft")
           {
               int a=q.front();
               q.pop_front(t);
               cout<<"Popped from left: "<<a
               <<endl;
           }
       }
    }
    return 0;
}
