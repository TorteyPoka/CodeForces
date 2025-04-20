#include <bits/stdc++.h>
using namespace std;

//        @author: TorteyPoka

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

const int N = 1e3+5;

bool is_beautiful(vector<vector<int>> h, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + 1 < n && h[i][j] == h[i + 1][j]) return false;
            if (j + 1 < n && h[i][j] == h[i][j + 1]) return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<vector<int>>h(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> h[i][j];
    
    int ar[n], br[n];
    for (int& x : ar) cin >> x;
    for (int& x : br) cin >> x;

    if (is_beautiful(h, n)) {
        cout << 0 << el;
        return;
    }
    int mn = INT32_MAX;
    int GT = pow(2, n);
    for (int row = 0; row < GT; row++) {
        for (int col = 0; col < GT; col++) {
            vector<vector<int>> temp = h;
            int cost = 0;
            for (int i = 0; i < n; ++i) {
                if (row & (1 << i)) {
                    cost += ar[i];
                    for (int j = 0; j < n; ++j)
                        temp[i][j]++;
                }
            }
            for (int j = 0; j < n; ++j) {
                if (col & (1 << j)) {
                    cost += br[j];
                    for (int i = 0; i < n; ++i)
                        temp[i][j]++;
                }
            }
            if (is_beautiful(temp, n)) {
                mn = min(mn, cost);
            }
        }
    }
    if (mn == INT32_MAX) cout << -1 << el;
    else cout << mn << el;
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