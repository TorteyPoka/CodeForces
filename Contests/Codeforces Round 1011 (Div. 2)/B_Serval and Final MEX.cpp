#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/
/*

	0 1 0 0 1

	5 4 3 2 1 0

	0 0 1 1

	1 0 0 0

*/

void solve() {
	int n;
	cin>>n;
	int ar[n];
	int zr = 0;
	for(auto & i : ar){
		cin>>i;
		if(i == 0){
			zr++;
		}
	}
	if(!zr){
		cout << 1 << endl;
		cout << 1 << " " << n << endl;
	}
	else if(zr == n){
		cout << 3 << endl;
		cout << 3 << " " << n << endl;
		cout << 1 << " " << 2 << endl;
		cout << 1 << " " << 2 << endl;
	}
	else{
		bool z = false;
		for(int i = 1; i<n; i++){
			if(ar[i] == 0){
				z = true;
				break;
			}
		}
		if(ar[0] != 0){
			cout << 2 << endl;
			cout << 2 << " " << n << endl;
			cout << 1 << " " << 2 << endl;
		}
		else if(ar[n-1] != 0){
			cout << 2 << endl;
			cout << 1 << " " << n-1 << endl;
			cout << 1 << " " << 2 << endl;
		}
		else{
			int id1 = 1;
			for(int i = 1; i<n-1; i++){
				if(ar[i] != 0){
					id1 = i+1;
					break;
				}
			}
			if(id1 == 2){
				cout << 3 << endl;
				cout << id1 + 1 << " " << n << endl; 
				cout << 1 << " " << 2 << endl;
				cout << 1 << " " << 2 << endl;
			}
			else{
				cout << 3 << endl;
				cout << id1 << " " << n << endl;
				cout << 1 << " " << id1-1 << endl;
				cout << 1 << " " << 2 << endl;
			}
		}
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