#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update> ordered_set;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> a(n);

    for (auto &x : a) cin >> x;

    vector<int> left(n), right(n);

    ordered_set s;

    // LEFT
    for (int i = 0; i < n; i++) {
        int lessEq = s.order_of_key(a[i] + 1);
        left[i] = i - lessEq;
        s.insert(a[i]);
    }

    s.clear();

    // RIGHT
    for (int i = n - 1; i >= 0; i--) {
        int lessEq = s.order_of_key(a[i] + 1);
        right[i] = (int)s.size() - lessEq;
        s.insert(a[i]);
    }

    for (int i = 0; i < n; i++)
        cout << left[i] + right[i] << " ";
}