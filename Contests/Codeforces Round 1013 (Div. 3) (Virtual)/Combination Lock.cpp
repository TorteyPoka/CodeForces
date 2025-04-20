#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

/*
	1 2 3 4 5 6 7

	1 2 3 4 5 6 7 8 -x
*/

void solve() {
	int n;
	cin>>n;
	if(n&1){
		int a = 1, b = n/2 + 2;
		for(int i = 1; i<=n/2; i++){
			cout << a << " " << b << " ";
			a++, b++;
		}
		cout << n/2 + 1 << endl;
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