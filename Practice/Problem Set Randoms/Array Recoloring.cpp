#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/
/*
	1 2 3 3 	4
	0 1 2 3
*/

void solve() {
	int n, k; cin>>n>>k;
	int ar[n];
	int freq[n+1];
	vector<pair<int,int>>vp;
	for(int i = 0; i<n; i++){
		cin>>ar[i];
		vp.push_back({ar[i], i});
	}
	sort(vp.begin(), vp.end(), greater<>());

	for(int i = 0; i<k; i++){

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