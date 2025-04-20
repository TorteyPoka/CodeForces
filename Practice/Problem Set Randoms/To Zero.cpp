#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
	int n , k;
	cin>>n>>k;
	if(n&1){
		cout << (n-1) / (k-1) + ((n-1)%(k-1) != 0) << endl;
	}
	else cout << n/(k-1) + ((n)%(k-1) != 0)  << endl;

}
signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
	int T = 1, tc = 1;
	cin >> T;
	for (; tc <= T; tc++) {
		// cout << "Case " << tc << ": ";
		solve();
	}

	return 0;
}