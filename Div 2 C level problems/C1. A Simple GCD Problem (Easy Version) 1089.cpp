		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>

//for pbds
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
// 1. find_by_order(k) -> returns iterator to the kth smallest element (0 based)
// 2. order_of_key(k)  -> returns the number of elements strictly less than k

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
const ll Mod = 1e9 + 7;


/*OBSERVATION:
	In terms of GCD every pair matters. If we have a, b ,c for gcd we use __gcd(a, __gcd(b,c))
	so for the final gcd every pair of gcd is important.
	If we can make sure any element of any array is providing the same gcd to the left and right
	after changing it to any other values then gcd will be same in every sub array that contains 
	the element

	Now the puzzle is what to choose as the substitute as the element?
	here LCM plays the role if we calculate the lcm (__gcd(left, el), __gcd(right, el))
	then the value will always provide the same gcd to both ways
*/
ll lcm(int a, int b){
	return a / __gcd(a, b) * b;
}

void Puzzle_Out()
{
    ll n;	cin >> n;
    vector<ll> a(n), b(n), ans(n);
    for(ll &i : a) cin >> i;
    for(ll &i : b) cin >> i;

    ans[0] = __gcd(a[0], a[1]);
    ans[n - 1] = __gcd(a[n - 2], a[n - 1]);
    for(int i = 1; i < n - 1; i++)
    	ans[i] = lcm(__gcd(a[i - 1], a[i]), __gcd(a[i], a[i + 1]));
    
    ll res = 0 ;
    for(int i = 0; i < n; i++) res += (a[i]!=ans[i]);
    cout << res << nl;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    for (int tc = 1; tc <= t; tc++)
        Puzzle_Out();

    return 0;
}
/* author : Sadee Abdullah */ 
