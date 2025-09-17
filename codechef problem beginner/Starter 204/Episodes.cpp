#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int tc;
	cin >> tc;
	while (tc--)
	{
	    int n, k;
	    cin >> n >> k;
	    int totalTime = n * k;
	    int hour = totalTime / 60;
	    cout << hour << " " << (totalTime - (60 * hour)) << endl;
	}

}
