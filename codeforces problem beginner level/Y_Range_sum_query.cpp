#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int arr[n];

    long long int prefix[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            prefix[0] = arr[0];
        }
        else
        {
            prefix[i] = arr[i] + prefix[i - 1];
        }
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << (prefix[r - 1] - prefix[l - 1]) + arr[l - 1] << endl;
    }
    return 0;
}