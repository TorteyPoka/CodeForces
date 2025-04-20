#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/
int x, y;

int sum(int k){
	return 1LL*(( + k) + (y + k));
}
int xr(int k){
	return 1LL*((x + k) ^ (y + k));
}	

void solve() {
	cin >> x >> y;
	int l = 1, r = 1000000;
	while(l <= r){
		int m = (l + r) / 2;
		if(sum(m) < xr(m)){
			r = m;
		}
		else l = m;
	}
	if(sum((l+r)/2) == xr((l+r)/2)){
		cout << sum((l+r)/2) << endl;
	}
	else cout << -1 << endl;
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