#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        // taking a stack type queue
        stack<vector<int>> st;

        int max_length = INT_MIN;

        for (int i = 0; i< n; i++)
        {
            vector<int> tmp;
            char val;
            while(cin >> val)
            {
                if (val == '\n')
                    break;
                else
                tmp.push_back(val - '0');
            }
            if (tmp.size() > max_length)
            {
                max_length = tmp.size();
            }
            st.push(tmp);
            tmp.clear();
        }
    }
    return 0;

}