#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
	int n;
	cin>>n;
	int totSum = (n*(n+1))/2;
	int RR = sqrt(totSum);
	if(RR * RR == totSum){
		cout << -1 <<endl;
		return;
	}
	int sum = 0;
	int temp = 0;
	for(int i = 1; i<=n; i++){
		sum += i;
		int r = sqrt(sum);
		if(r * r == sum){
			temp = i;
			continue;
		}
		cout << i << " ";
		if(temp){
			cout << temp << " ";
			temp = 0;
		}		
	}
	cout << endl;
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