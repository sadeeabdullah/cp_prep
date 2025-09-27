#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    fastIO();
 
    int t;
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        vector<char> str = {'a','e', 'i', 'o', 'u'};
        string ans = "";

        int i = 0;
        while (n--)
        {
            if (i == 5)
            {
                i = 0;
            }
            ans += str[i];
            i++;
        }

        sort(ans.begin(), ans.end());

        cout << ans << nl;
    }
    return 0;
}