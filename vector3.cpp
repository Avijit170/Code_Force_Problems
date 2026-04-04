#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(NULL);
    int q,x,a,b,c;
    cin >> q;
    vector<int> A;
    A.reserve(q);
    for(int i=0;i<q;i++)
    {
        cin>>x;
        A.push_back(x);
    }
    cin>>a;
    A.erase(A.begin()+a-1);
    cin>>b>>c;
    A.erase(A.begin()+b-1,A.begin()+c-1);

    cout<<A.size()<<endl;
    for(auto i:A)
    {
        cout<<i<<" ";
    }
    return 0;
}

