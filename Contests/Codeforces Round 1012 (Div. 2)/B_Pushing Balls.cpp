#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/
/*
	001
	000
	101

*/

void solve() {
	int n, m;
	cin >> n >> m;
	char ar[n][m];
	set<pair<int, int>>rvp, cvp;
	int o = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0 ; j < m; j++) {
			cin >> ar[i][j];
			if (ar[i][j] == '1') {
				o++;
			}
		}
	}
	map<pair<int, int>, int>mp;
	int row_one = 0, col_one = 0;
	for (int i = 0; i < n; i++) {
		if (ar[i][0] == '1') {
			row_one++;
			mp[ {i, 0}] = 1;
			for (int j = 1; j < m; j++) {
				if (ar[i][j] == '1') {
					cerr << i << " " << j << endl;
					mp[{i, j}] = 1;
					row_one++;
				}
				else break;
			}
		}
	}
	for (int j = 0; j < m; j++) {
		if (ar[0][j] == '1') {
			if (!mp[ {0, j}])
				col_one++;
			for (int i = 1; i < n; i++) {
				if (ar[i][j] == '1' and !mp[ {i, j}]) {
					cerr << i << " " << j << endl;
					col_one++;
				}
				if(ar[i][j] == '0')break;
			}
		}
	}
	// cerr << "ROW " << row_one << " " << "COL " << col_one << endl;
	if (col_one + row_one == o) {
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
	cerr << endl;
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