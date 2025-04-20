#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
	int n; cin>>n;
	int sum = 0, od = 0, mx = 0;
	for(int i = 1; i<=n; i++){
		int  x;
		cin>>x;
		sum += x;
		od += (x & 1);
		mx = max(mx , x);
	}
	if(!od or od == n){
		cout << mx << endl;
	}
	else{
		cout << sum - od + 1 << endl;
	}
}	
signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
	int T = 1, tc = 1;
	cin >> T;
	for (; tc <= T; tc++) {
		// cerr << "Case " << tc << ": ";
		solve();
	}

	return 0;
}