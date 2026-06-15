#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin >> n; 
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        for (int i = 2; i < x/2; i++)
        {
            if(x % i == 0)
            {
                cnt++;
            }
        }
        if(cnt==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        cnt = 0;
    }
    
    return 0;
}