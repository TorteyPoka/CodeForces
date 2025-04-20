#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// @author: TorteyPoka

#define endl '\n'
// No need to redefine 'int' as 'long long'

void solve() {
    int n; 
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (auto& [x, y] : mp) {
        cout << x << " " << y << endl;
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    cout.tie(nullptr);
    
    int T = 1, tc = 1;
    cin >> T;
    
    // Handling multiple test cases
    for (; tc <= T; tc++) {
        // cerr << "Case " << tc << ": ";
        solve();
    }

    return 0;
}
 