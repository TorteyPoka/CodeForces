#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/
void solve() {
	int n;
	cin>>n;
	int ar[n+1];
	int freq[7] = {3,1,2,1,0,1};
	for(int i = 1; i<=n; i++){
		cin>>ar[i];
	}
	for(auto i : freq)cerr << i << " ";
		cerr << endl;
	for(int i = 1; i<=n; i++){
		if(ar[i] <= 5){
			if(freq[ar[i]])
				freq[ar[i]]--;
			if(freq[0] == 0 and freq[1] == 0 and freq[2] == 0 and freq[3] == 0 and freq[5] == 0){
				cout << i << endl;
				return;
			}	
		}
	}
	cout << 0 << endl;
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