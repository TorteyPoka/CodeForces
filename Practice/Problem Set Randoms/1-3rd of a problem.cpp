#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
	int a, b;
	cin>>a>>b;
	int c = 2*b;
	int d = 4*b;
	int e = b*b;
	int ans = (a*d)+(e-1)+(c-2);
	cout << ans << endl;
}	
signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
	int T = 1, tc = 1;
	// cin >> T;
	for (; tc <= T; tc++) {
		// cerr << "Case " << tc << ": ";
		solve();
	}

	return 0;
}