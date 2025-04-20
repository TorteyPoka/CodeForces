#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

/*
	3 1 4 1 5 9 2 6 5 3
	od = 3 1 1 5 9 5 3
	ev = 4 2 6
	poss = 4 3 1 1 5 9 5 3

	1 2
	2 1

	10 99 98 97
	10 99 97


*/

void solve() {
	int n;
	cin >> n;
	int od = 0, ev = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x & 1)od++;
		else ev++;
	}
	if(od and ev){
		cout << 1 + od << endl;
	}
	else if(!od){
		cout << 1 << endl;
	}
	else{	
		cout << max(1LL*0, ((od > 1) + (od - 2))) << endl;
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