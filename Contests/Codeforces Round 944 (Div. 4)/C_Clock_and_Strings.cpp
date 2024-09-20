/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define test  \
    int T;    \
    cin >> T; \
    while (T--)

void crack()
{
    int a, b, c ,d;
    cin>>a>>b>>c>>d;
    bool ok = false;
    if(c > b){
        if(d < b && d > a){
            ok = true;
        }
    }
    else if(c < a){
        if(d > a && d < b){
            ok = true;
        }
    }
    if(ok) cout << "YES" << endl;
    else cout << "NO"  << endl;
    
}


void solve(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int cc = 0, dd = 0;
    if(b > a){
        if(c < b && c > a)
            cc = 1;
        if(d < b && d > a)
            dd = 1;
    }
    else if(a > b){
        if(c < a && c > b)cc = 1;
        if(d < a && d > b) dd = 1;
    }
    if((cc == 1 && dd == 0) || (cc == 0 && dd == 1)){
        cout << "YES" << endl;
    }
    else cout <<"NO" << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    solve();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}