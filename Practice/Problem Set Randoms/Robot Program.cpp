#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

/*
	15 -4 23
	...0...0....... //
	RRRRLLRRLLLLLRR
*/

void solve() {
	int n, x, sec;
	cin>>n>>x>>sec;
	string s;
	cin>>s;
	int zr = 0;
	for(int i = 0; i < min(n,sec); i++){
		if(s[i] == 'L'){
			x--;
		}
		else x++;
		if(x == 0){
			zr = i + 1;
			break;
		}
	}
	if(zr){
		sec -= zr;
		zr = 0;
		for(int i = 0; i < min(n,sec); i++){
			if(s[i] == 'L'){
				x--;
			}
			else x++;
			if(x == 0){
				zr = i + 1;
				break;
			}
		}
		if(zr)
		cout << (sec + zr) / zr << endl;	
		else cout << 1 << endl;
	}
	else cout << 0 << endl;
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