#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while (tc--)
	{
	    int n, m;
	    cin >> n >> m;
	    string s;
	    cin >> s;
	    
	    int bob = 0;
	    int alice = 0;
	    
	    for (char c : s)
	    {
	        if (c == '1')
	        {
	            alice++;
	        }
	        else if ( c == '0')
	        {
	            bob++;
	        }
	    }
	    
        int left =n - m;
        int diff = abs(alice - bob);

        cout << ((diff <= left && (left - diff) % 2 == 0) ? "Yes" : "No") << endl;
	}

}
