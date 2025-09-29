#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define fastIO() ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main ()
{
    fastIO();
    int x, y;
    cin >> x >> y;
    int result = x - (y / 2) ;
    cout << result << nl;
    return 0;
}