#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc --)
    {
        int n;
        cin >> n;
        vector<char> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        bool found = false;
        int cnt = 0;
        for(int i = 0; i< n; i++)
        {
             if (i + 2 < n && arr[i] == '.' && arr[i + 1] == '.' && arr[i + 2] == '.')
            {
                found = true;
                break;
            }
            else if (arr[i] == '.')
            {
                cnt++;
            }
        }

        cout << ((found) ? 2 : cnt) << endl;
    }
    return 0;
}