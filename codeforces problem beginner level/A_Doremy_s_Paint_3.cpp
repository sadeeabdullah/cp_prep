#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
using namespace std;
int main()
{
    fastIO();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int sum = arr[0] + arr[1];

        bool flag = true;

            // creating a map
            map<int, int> mp;
            // map size must be 2 and the difference of the element should not be less than absolute 1
            for (int i = 0; i < n; i++)
            {
                mp[arr[i]]++;
            }

            if (mp.size() == 1)
            {
                cout << "Yes" << nl;
            }
            else if (mp.size() < 3)
            {
                vector<int> cn;
                for (auto [num, cnt] : mp)
                {
                    cn.push_back(cnt);
                }
                int dif = abs(cn[0] - cn[1]);
                if (dif < 2)
                {
                    cout << "Yes" << nl;

                }
                else
                    cout << "No" << nl;
            }
            else
                cout << "No" << nl;


    }
    return 0;
}