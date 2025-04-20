#include <bits/stdc++.h>
using namespace std;

//        @author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
    int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int max_diff = a.back() - a.front();
        cout << max_diff << "\n";
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