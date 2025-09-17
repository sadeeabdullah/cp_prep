#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];


        // sorting the array
        sort(arr.begin(), arr.end());
        int mx = arr[0];

            for (int i = 0; i < n - 1; i++)
            {
                // comparing
                mx = max((arr[i + 1] - arr[i]), mx);
            }

            mx = max(((x - arr[n - 1]) * 2), mx);

        cout << mx << endl;

    }
    return 0;
}