#include <bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m; 
        ll x, y;
        cin >> n >> m >> x >> y;
        for (int i = 0; i < n; i++)
        {
            ll tmp;
            cin >> tmp;
        }
        for (int i = 0; i < m; i++)
        {
            ll tmp;
            cin >> tmp;
        }
        cout << (n + m) << endl;
    }
    return 0;
}