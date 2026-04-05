#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int p;
    if (!(cin >> p)) return 0;
    while (p--)
    {
        int n;
        cin >> n;
        for (long long i = 1;i <= n;i++)
        {
            long long odd1 =2*i-1;
            long long odd2 =2*i+1;
            cout<<odd1*odd2<<(i == n ? "" : " ");
        }
        cout<<"\n";
    }
    return 0;
}