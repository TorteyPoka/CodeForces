#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

/*

	1 5 2 3 4
	5 % 2 = 1

	1 2 3 4 5
	1 2 = 2 % 2 = 0
	1 3 2 5 4
	1 3 = 3 % 2 = 1
	3 2 = 3 % 3 = 

	1 2 3 4 5
	1 3 5 2 4

	1 3 = 3 % 2 = 1
	3 5 = 5 % 3 = 2
	5 2 = 5 % 2 = 1


	1 2 4 3 5
	1 2 = 2 % 2 = 0

	1 3 2 4 5
	1 3 = 3 % 2 = 1
	3 2 = 3 % 3 = 0

	1 5 4 3 2

	1 5 = 5 % 2 = 1
	5 4 = 5 % 3 = 2
	4 3 = 4 % 4 = 0
	3 2 = 3 % 5 = 3

	2 1 3 4 5

	5 4 3 2 1
	5 4 = 5 % 2 = 1
	4 3 = 4 % 3 = 1

	5 1 2 3 4

	5 1 = 5 % 2 = 1
	1 2 = 2 % 3 = 2
	2 3 = 3 % 4 = 3 

	1 2 3 4 5
	5 4 3 2 1
	5 4 = 5 % 2 = 1
	4 3 = 4 % 3 = 1
	3 2 = 3 % 4 = 3
	
*/

void solve() {
	int n;
	cin>>n;
	if(n % 2 == 0){
		cout << -1 << endl;
		return;
	}
	cout << n << " ";
	for(int i = 1; i<n; i++){
		cout << i << " ";
	}
	cout << endl;
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