#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
	int n;
	cin>>n;
	int ar[n];
	int mn = INT32_MAX, mx = 0;

	for(int & i : ar){
		mn = min(mn, i);
		mx = max(mx, i);
	}
	int mnIdx = 0;
	for(int i = 0; i<n; i++){
		if(ar[i] == mn){
			mnIdx = i;
			break;
		}
	}
	int mxIdx = n-1;
	for(int i = n-1; i>=0; i--){
		if(ar[i] == mx){
			mxIdx = i;
			break;
		}
	}
	if(mn < mnIdx + 1){
		cout << "NO" << endl;
		return;
	}
	
	bool ok = false;
	
	for(int i = 0; i<n; i++){

	}

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