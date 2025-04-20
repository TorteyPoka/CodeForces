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
void solve(){
    int n,k;
    cin >> n >> k;
    int ar[n];
    for(auto &i : ar)cin >> i;

    for (int i = 0; i < n; i++){
        int jk = 0;
        for (int j = 0; j < n; j++){
            if(i == j) continue;
            if(abs(ar[i]-ar[j]) % k != 0){
                jk++;
            }
        }
        if(jk == n-1){
            yes
            cout << i+1 << endl;
            return;
        }
    }
    no
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