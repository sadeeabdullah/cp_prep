		
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


void Puzzle_Out()
{
    ll n; 	cin >> n;
    vector<ll> a(n); 	for(ll &i : a) cin >> i;
    ll ans = 0;
    for(ll i = 1; i < n; i++){
    	ans += ((a[i - 1] > a[i]) ? a[i - 1] - a[i] : 0);
    	if(a[i - 1] > a[i]) a[i] = a[i - 1];
    } 
    cout << ans << nl;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    for (int tc = 1; tc <= t; tc++)
        Puzzle_Out();

    return 0;
}
/* author : Sadee Abdullah */ 