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


void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> l(n), r(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> r[i];
    }
    int ans = 0;
    vector<int> extras(n);
    for (int i = 0; i < n; ++i) {
        int li = l[i];
        int ri = r[i];
        if (li >= ri) {
            ans += li;
            extras[i] = ri;
        } else {
            ans += ri;
            extras[i] = li;
        }
    }
    sort(extras.rbegin(), extras.rend());
    int overflow = 0;
    for (int i = 0; i < k - 1; ++i) {
        overflow += extras[i];
    }

    cout << ans + overflow + 1 << el;
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