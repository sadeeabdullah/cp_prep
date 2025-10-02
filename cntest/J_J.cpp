#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    
    int n, k;
    cin >> n >> k;
    int op[k];
    for(int i = 0 ; i < k; i++)
    {
        cin >> op[i];
    }

    vector<bool> dp(n + 1, false);
    dp[0] = false;

    for (int i = 1; i<= n; i++)
    {
        for(int j = 0; j< k ;j++)
        {
            if(op[i] <= i && !dp[i - op[j]])
            {
                dp[i] = true;
                break;// cmt cmt cmt
                
            }
        }
    }

    for (int i = 1; i <=n; i++)
    {
        cout << (dp[i] ? 'W' : 'L');
    }
    cout << nl;
    return 0;
}