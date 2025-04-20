#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

bool comp(pair<int, int>p1, pair<int, int>p2) {
	return p1.second < p2.second;
}

void solve() {
	int n, m;
	cin >> n >> m;
	int ar[n][m];
	vector<pair<int, int>>vp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> ar[i][j];
			vp.push_back({i, ar[i][j]});
		}
	}
	sort(vp.begin(), vp.end(), comp);
	vector<int>ans;
	for (int i = 0; i < n; i++) {
		ans.push_back(vp[i].first);
	}
	if (vp.size() > n) {
		for (int i = 0; i < n; i++) {
			if (ans[i] != vp[n + i].first) {
				cout << -1 << endl;
				return;
			}
		}
	}
	for (auto x : ans)cout << x + 1 << " ";
	cout << endl;
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