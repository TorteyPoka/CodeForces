#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

/*
15 97623 1300111
105 95 108 111 118 101 95 118 97 108 111 114 97 110 116
==
15 * 97623
1464345
==






sum 1604
1300111 / 1604 = 810....
1604 * 810 = 1299240
1300111 - 1299240 = 871 = 9(id)

97623-(810+1) = 96812
96812 * 15 = 1452180 (id)
96812 * 1604 = 

5 3 10
3 4 2 1 5

sum = 15
3 4 2 1 5 3 4 2 1 5 3 4 2 1 5


6 15 2
1 1 1 1 1 1
6 * 14 + 5
89
*/

void solve() {
	int n, k, x;
	cin>>n>>k>>x;
	int ar[n];
	int sum = 0;
	for(int i = 0; i<n; i++){
		cin>>ar[i];
		sum+=ar[i];
	}
	if(sum == x){
		cout << n * (k-1) + 1 << endl;
		return;
	}
	if(sum > x){
		int id = n;
		int sum2 = 0;
		for(int i = n-1; i>=0; i--){
			if(sum2 + ar[i] >= x){
				id = i + 1;
				break;
			}
			sum2 += ar[i];
		}
		cout << n * (k-1) + id  << endl;
		return;
	}
	if(1LL*(sum * k) < x){
		cout << 0 << endl;
		return;
	}
	int a = x / sum;
	int b = sum * a;
	int c = x - b;
	int id = 0;
	for(int i = 0; i<n; i++){
		if((c - ar[i]) <= 0){
			id = i;
			break;
		}
		c -= ar[i];
	}
	int kk = k - (a + (x % sum != 0));
	int h = kk * n;
	cout << h + id << endl;

	// cerr << 1LL*(needed * n) << endl;

	// int id = n;
	// for(int i = n-1; i>=0; i--){
	// 	sum += ar[i];
	// 	if(sum >= x) id = i+1;
	// }
	// if(id == n){
	// 	cout << 0 << endl;
	// }
	// else{
	// 	cout << n*(k-1)+id << endl;
	// }
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