#include <bits/stdc++.h>
using namespace std;

//		@author: TorteyPoka

#define el '\n'
#define int long long
#define yes cout << "Yes" << el;
#define no cout << "No" << el;

map<int,int> countmp(int* a, int n){
	map<int,int>mp;
	for(int i = 0; i<n; i++){
		mp[a[i]]++;
	}
	return mp;
}

/*----------X----------*//*


*/

bool check(int a, int b){
    return abs(a - b) % 2;
}

void solve() {
	int n, x, y;
    cin >> n >> x >> y;

    vector <int> v(n);
    x--, y--;
    for(int i=0; i<n; i++){
        v[(x + i) % n] = i % 2;
    }
    if(n % 2 != 0 || !check(x, y)){
        v[x] = 2;
    }
 
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
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