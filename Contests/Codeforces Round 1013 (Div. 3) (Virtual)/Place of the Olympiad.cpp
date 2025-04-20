#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
	int n,m,k;
	cin>>n>>m>>k;
	int dif=(k+n-1)/n;
	int mid=m-dif+1;
	cout<<(m+mid)/mid-1<<endl;
}
signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
	int T, tc = 1;
	cin >> T;
	for (; tc <= T; tc++) {
		// cerr << "Case " << tc << ": ";
		solve();
	}

	return 0;
}