#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
	int n, k;
	cin>>n>>k;
	int ar[n];
	map<int,int>freq;
	for(int & i : ar){
		cin>>i;
		freq[i]++;
	}
	sort(ar, ar+n);
	int ans = 0;
	for(int i = 0; i<n; i++){
		if(freq[k - ar[i]]){
			ans++;
			freq[k-ar[i]]--;
		}
	}
	cout << ans/2 << endl;
}

signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
	freopen("error.txt", "w", stderr);
	int T, tc = 1;
	cin >> T;
	for (; tc <= T; tc++) {
		// cout << "Case " << tc << ": ";
		solve();
	}

	return 0;
}