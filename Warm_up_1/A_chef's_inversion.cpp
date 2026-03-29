		
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

void Puzzle_Out(){
    ll n, k;	cin >> n >> k;
    vector<ll> ans( n + 1, 0);
    ll st = 1, mx = n, i = 1;
    
    while(i <= n){
    	ll rm_pos = n - i;
    	ll mx_possible = rm_pos * (rm_pos - 1) / 2;
    	if(mx_possible < k){
    		ans[i] = mx;
    		mx--, k -= rm_pos;
    	}else{
    		ans[i] = st, st++;
    	}
    	i++;
    }
    for(ll i = 1; i <= n; i++){
    	cout << ans[i];
    	if(i < n) cout << " ";
    }
    cout << nl;
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