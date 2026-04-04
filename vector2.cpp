#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(NULL);
    int q,x;
    cin >> q;
    vector<int> A;
    A.reserve(q);
    for(int i=0;i<q;i++)
    {
        cin>>x;
        A.push_back(x);
    }
    sort(A.begin(),A.end());
    for(auto i:A)
    {
        cout<<i<<" ";
    }
    return 0;
}
