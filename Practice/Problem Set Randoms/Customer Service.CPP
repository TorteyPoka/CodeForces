#include <bits/stdc++.h>
using namespace std;

//      @author: TorteyPoka

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
    int n;
    cin>>n;
    multiset<int>mexy;
    for(int i = 1; i<=n; i++){
        int ar[n];
        for(int j = 0; j<n; j++){
            cin>>ar[j];
        }
        int mext = 0;
        for(int j = n-1; j>=0; j--){
            if(ar[j] != 1)break;
            mext++;
        }
        mexy.insert(mext);
    }   
    int mex = 0;
    while(!mexy.empty()){
        cerr << *mexy.begin() << " ";
        if(*mexy.begin() < mex){
            mexy.erase(mexy.begin());
            continue;
        }
        mexy.erase(mexy.begin());
        mex++;
    }
    cerr << el;
    cout << mex <<el;
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