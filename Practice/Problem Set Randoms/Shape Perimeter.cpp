#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
	int n, m;
	cin>>n>>m;
	int m_ = m,fx = 0, fy = 0;
	while(n--){
		int x, y;
		cin>>x>>y;
		if(!fx and !fy) fx = x, fy = y;
		m += x, m_ += y;
	}
	cout << ((m_ - fy) + (m - fx)) * 2 << endl; 
}

signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
	int T, tc = 1;
	cin >> T;
	for (; tc <= T; tc++) {
		// cout << "Case " << tc << ": ";
		solve();
	}

	return 0;
}