#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*//*
	1 2 3
	2 3 2
	3 2 3
	3 2 3
	3 2 3
	3 2 3
	3 2 3
	3 2 3

	1 2 3 4
	4 3 4 3

	1 2 3 4 5
	4 5 4 5 4

	1 2 3 4 5 6
	6 5 6 5 6 5
*/


void solve() {
	int n, k;
	cin>>n>>k;
	if(k % 2 == 0){
		for(int i = 1; i<n-1; i++){
			cout << n-1 << " ";
		}
		cout << n << " " << n-1 << endl;
	}
	else{
		for(int i = 1; i<n; i++){
			cout << n <<" ";
		}
		cout << n-1 << endl;
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