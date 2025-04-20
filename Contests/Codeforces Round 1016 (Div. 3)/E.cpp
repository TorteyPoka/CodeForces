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
bool can_part(int m, const vector<int>& a, int k) {
    int cnt = 0, need = m;
    vector<bool> vis(m, 0);
    for (int i : a) {
        if (i < m && !vis[i]) {
            vis[i] = 1;
            need--;
        }
        if(need == 0) {
            cnt++;
            if (cnt >= k) return 1;
            for(int ii = 0; ii <m; ii++){
                vis[ii] = 0;
            }
            need = m;
        }
    }
    return 0;
}

int answer(const vector<int>& a, int k) {
    unordered_map<int, int> freq;

    for (int i : a) freq[i]++;

    int mex = 0;
    while (freq[mex] >= k){
        mex++;
    }
    int l = 0, r = mex + 1;
    while (l < r) {
        int mid = (l + r) / 2;
        if (can_part(mid, a, k)) l = mid + 1;
        else r = mid;
    }
    return l - 1;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int& i : a) cin >> i;
    cout << answer(a, k) << el;
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