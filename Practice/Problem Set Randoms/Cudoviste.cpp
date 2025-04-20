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

const int N = 53;
int di[4] = {0, 0, 1, 1};
int dj[4] = {0, 1, 0, 1};
char grid[N][N];

int car_checar(int i , int j){
	int cars = 0;
	bool building = false;
	for(int k = 0; k<4; k++){
		int nxt_i = i + di[k];
		int nxt_j = j + dj[k];
		if(grid[nxt_i][nxt_j] == '#'){
			building = true;
			break;
		}
		if(grid[nxt_i][nxt_j] == 'X'){
			cars++;
		}
	}
	return (building ? -1 : cars);
}

void solve() {
	int n , m;
	cin>>n>>m;
	for(int i = 0; i<n; i++)
		for(int j = 0; j<m; j++)
			cin>>grid[i][j];
	int one = 0, two = 0, thr = 0, fr = 0, zr = 0;
	for(int i = 0; i<n-1; i++){
		for(int j = 0; j<m-1; j++){
			cerr << i << " " << j << endl;
			int dig = car_checar(i, j);
			if(dig == -1){
				continue;
			}
			(dig == 4 ? fr += 1 : (dig == 3 ? thr += 1 : (dig == 2 ? two += 1 : (dig == 1? one += 1 : zr += 1))));
		}
	}
	cout << zr << el << one << el << two << el << thr << el << fr << el;
	
}	
signed main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
	int T = 1, tc = 1;
	// cin >> T;
	for (; tc <= T; tc++) {
		// cerr << "Case " << tc << ": ";
		solve();
	}

	return 0;
}