#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

bool comp(pair<int, int>p1, pair<int, int>p2) {
	return p1.second == p2.second ? p1.first < p2.first : p1.second > p2.second;
}
void solve() {
	int n;
	cin >> n;
	vector<int>ans;
	for(int i = 1; i<=n; i++)ans.push_back(i);
	for(int i = 1; i<=n; i++){
		string s;
		cin>>s;
		int k = count(s.begin(), s.end(), '1');
		if(k != string::npos){

		}
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