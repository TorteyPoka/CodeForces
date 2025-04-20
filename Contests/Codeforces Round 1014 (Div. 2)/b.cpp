#include <bits/stdc++.h>
using namespace std;

//        @author: TorteyPoka

#define endl '\n'
#define int long long
/*----------X----------*/

void solve() {
    int n;
    cin>>n;
    string a, b; cin>>a>>b;
    int od_Z = 0, ev_Z = 0, od_O = 0, ev_O = 0;
    for(int i = 0; i<n; i++){
        if(a[i] == '1'){
            od_O += (i&1);
            ev_O += (i%2==0);
        }
        if(b[i] == '0'){
            od_Z += (i&1);
            ev_Z += (i % 2 == 0);
        }
    }
    if(od_Z >= ev_O and ev_Z >= od_O){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
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