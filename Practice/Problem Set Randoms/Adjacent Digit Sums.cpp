#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*//*


*/

int dig_sum(int n){
	int sum = 0;
	while(n > 0){
		int rem = n%10;
		n/=10;
		sum += rem;
	}
	return sum;
}

void solve() {
	int x, y;
	cin>>x>>y;
	if(x == y-1){
		cout << "Yes" << endl;
		return;
	}
	if(x - y + 1 >= 0 and (x - y + 1)%9 == 0){
		cout << "Yes" <<endl;
	}
	else cout << "No" << endl;
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