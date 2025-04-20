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

bool is_prime(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

void solve() {
    int n, k;
    cin >> n >> k;
    bool prime = is_prime(n);
    if(prime and k == 1){
        yes
        return;
    }
    if(n == 1){
        no
        return;
    }
    if(n == 1 and k == 2){
        yes
    }
    else no
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