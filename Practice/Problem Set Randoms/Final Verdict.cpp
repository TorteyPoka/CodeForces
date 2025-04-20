#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*//*

	4 9
	7 11 2 5 = 25

	6 9
	1 9 14 12 10 8 = 54
*/


void solve() {
	int n, x;
	cin>>n>>x;
	int sum = 0;
	for(int i = 1; i<=n; i++){
		int y;
		cin>>y;
		sum += y;
	}
	cerr << sum << endl;
	if(sum/n == x and sum % x == 0){
		cout << "YES"<< endl;
	}
	else cout << "NO" <<endl;
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