		
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

vector<int> isPrimes(1e5 + 500, 0);
vector<int> prime;
void sieve(){
	for(int i = 2; i <= 1e5 + 500; i++){
		if(isPrimes[i]) continue;
		for(int j = 2 * i; j <= 1e5 + 500; j += i){
			isPrimes[j] = i;
		}
	}
	for(int i= 2; i <= 1e5 + 500; i++) if(isPrimes[i] == 0)prime.push_back(i);
}

void Puzzle_Out()
{
	int n;	cin >>n ;

	int need_prime = *(upper_bound(all(prime), n));

	
		// cout << need_prime << nl;
		vector<int> ans1(n + 1), ans2(n + 1);
		int idx = n , curr = n;
		while(idx > 0){
			int need = need_prime - idx;
			if(need <= curr){
				ans1[idx] = idx;
				ans2[idx] = need;
				idx--;
			}else{
				curr = idx;
				need_prime = *(upper_bound(all(prime), curr));
			}
		}

		for(int i = 1; i <= n; i++) cout << ans1[i] << " "; cout << nl;
		for(int i = 1; i <= n; i++) cout << ans2[i] << " "; cout << nl;
	
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    int t = 1;
    // cin >> t;
    for (int tc = 1; tc <= t; tc++)
        Puzzle_Out();

    return 0;
}
/* author : Sadee Abdullah */ 