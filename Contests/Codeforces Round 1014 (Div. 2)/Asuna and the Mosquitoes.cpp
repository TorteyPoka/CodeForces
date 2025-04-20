#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
	int n;
	cin>>n;
	int ar[n];
	int tot = 0;
	for(int i = 0; i<n; i++){
		cin>>ar[i];
		tot+=ar[i];
	}
	sort(ar, ar+n, greater<>());
	for(auto i : ar)cerr<< i << " ";
		cerr << endl;
	int mx = ar[0];
	int cnt = 0;
	int cons = 0;
	bool proc = 0;
	for(int i = 0; i<n; i++){
		if(mx % 2 != ar[i] % 2){
			proc = 1;
			break;
		}
	}
	if(proc){
		int id_ev = 0, id_od = 0;
		for(int i = 1; i<n; i++){
			if(ar[i] & 1 and !id_od){
				id_od = i;
			}
			else if(!id_ev)id_ev = i;
			if(id_ev and id_od)break;
		}
		if(mx&1 and id_ev != 1){
			cnt++;
		}
		for(int i = 1; i<n-1; i++){
			if(ar[i] & 1){
				cons++;
			}
			else if(ar[i+1] & 1){
				cnt++;
				if(cons > 2){
					cnt += cons - 2;
					cons = 0;
				}
			}
		}
		if((tot-cnt-ar[n-1]) & 1 )
		cout << tot - cnt << endl;
	}
	else cout << mx << endl;
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