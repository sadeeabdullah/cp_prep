#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int x, n;
        cin >> x >> n;
        int res = 0;
        for (int i = 1; i <= n; i++)
        {   
            if (i % 2 != 0)
            {
                res += x;
            }
            else
            {
                res += (x * (-1));
            }
        }

        cout << res << endl;
    }
    return 0;
}