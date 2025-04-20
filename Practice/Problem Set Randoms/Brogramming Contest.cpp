#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*//*
	00111 = 1
	10011 = 3
	11001 = 3
	10101 = 5
	01011 = 3
	10101010101 = 
	01
	10
*/


void solve() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cnt = (s[0] == '1');
	for(int i = 1; i<n; i++){
		if(s[i] != s[i-1])cnt++;
	}
	cout << cnt << endl;
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