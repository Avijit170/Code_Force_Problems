#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int total = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        total += v[i];
    }
    sort(v.rbegin(), v.rend());

    int mySum = 0, count = 0;
    for(int i = 0; i < n; i++)
    {
        mySum += v[i];
        count++;
        if(mySum > total - mySum)
            break;
    }
    cout << count;
}