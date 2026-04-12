		
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
    string s;	cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
    	st.push(s[i]);
    }

    map<char, int> mp;
    mp[st.top()]++;
    int ans =  1;
    char last = st.top();
    st.pop();
    for(int i = 1; i < s.size(); i++){
    	if(last == st.top()){
    		mp[last]++;
    	}
    	else{
    		ans = max(ans, mp[last]);
    		mp[last] = 0;
    		mp[st.top()]++;
    		last = st.top();
    	}
    	st.pop();

    }
    ans = max(ans, mp[last]);
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