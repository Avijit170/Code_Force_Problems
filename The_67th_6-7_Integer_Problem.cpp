#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p;
    cin>>p;
    while (p--)
    {
        int arr[7];
        int sum = 0, max = -100;
        for (int i = 0; i < 7; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        int ans = max - (sum - max);
        cout << ans << endl;
    }
    return 0;
}