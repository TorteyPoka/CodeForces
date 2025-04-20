#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
	int n, x;
	cin>>n>>x;
	int ar[n];
	for(int i = 0; i<n; i++){
		cin>>ar[i];
	}
	sort(ar, ar+n, greater<int>());

	int cnt = 0;
	int cons = 1;
	int mn = INT_MAX;
	for(auto i :ar)cerr << i << " ";
		cerr << endl;
	for(int i =0; i<n; i++){
		if(ar[i] >= x)cnt++;
		else{
			mn = min(mn, ar[i]);
			if(1LL*(cons * mn) >= x){
				cnt++;
				cons = 1;
				i++;
			}
			cons++;
		}
	}
	cerr << endl << endl;
	cout << cnt << endl;
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