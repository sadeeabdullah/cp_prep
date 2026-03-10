		
/* Bismillah hir rahmanir rahim */

#include <bits/stdc++.h>

//for pbds
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

//typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

#define ll long long int
#define llmax LLONG_MAX
#define nl '\n'
#define rall(var) (var).rbegin(), (var).rend()
#define all(var) (var).begin(), (var).end()
#define pb(var) push_back(var)
const ll Mod = 1e9 + 7;

void Puzzle_Out()
{
    string s1, s2; cin >> s1 >> s2;
    transform(all(s1), s1.begin(), ::tolower);
    transform(all(s2), s2.begin(), ::tolower);
    int ans = 0;
    for(int i = 0; i < s1.size(); i++){	
    	if(s1[i]  > s2[i]){
    		ans = 1;
    		break;
    	}else if(s1[i] < s2[i]){
    		ans = -1;
    		break;
    	}
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