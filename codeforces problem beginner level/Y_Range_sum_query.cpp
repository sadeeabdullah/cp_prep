#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int prefix[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            prefix[0] = x;
        }
        else
        {
            prefix[i] = x + prefix[i - 1];
        }
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 1)
            cout << prefix[r - 1]  << endl;
        else
            cout << (prefix[r - 1] - prefix[l - 2]) << endl;
    }
    return 0;
}