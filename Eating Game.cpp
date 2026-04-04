#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, arr[10];
        cin >> n;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int mx = *max_element(arr, arr + n);

        int cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == mx)
                cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
