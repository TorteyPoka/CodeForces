#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
	int n; cin >> n;
	cout << (n > 0?(n % 4 != 0 ? (n%4 != 1 ? (n % 4 != 2 ? 2 : 4) : 8) : 6) : 1) << endl;
	return 0;
}