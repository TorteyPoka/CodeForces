#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
	int n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	string q = s;
	reverse(q.begin(),  q.end());
	if(k==0){
		if(s < q){
			cout << "YES" << endl;
		}
		else cout<< "NO" << endl;
		return;
	}
	bool def = false;
	for(int i = 0; i < n-1; i++){
		if(s[i] != s[i+1]){
			def = true;
			break;
		}
	}
	if(def){
		cout << "YES" <<endl;
	}
	else cout << "NO" <<endl;
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