#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int count = 1;

    for (int i = 0; i < n; i++)
    {
        for (int i = 1; i <=3; i++)
        {
            cout << count << " ";
            count++;
        }
        count++;
        cout << "PUM" << endl;
    }
    return 0;
}