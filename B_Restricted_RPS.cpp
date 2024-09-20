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

#define pb push_back(a);

void crack()
{
    int n, a, b, c, r, p, s;
    string g;
    cin >> n;
    cin >> a >> b >> c;
    cin >> g;
    r = 0;
    p = 0;
    s = 0;
    string ans = "";
    for (int i = 0; i < g.size(); i++) {
       if (g[i] == 'R' && b) {
           ans+='P';
           b--;
       }
       else if (g[i] == 'P' && c) {
           ans+='S';
           c--;
       }
       else if (g[i] == 'S' && a) {
           ans+='R';
           a--;
       }
       else {
           ans +='N';
       }
    }
 
    int cnt = 0;
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] != 'N') cnt++;
    }
 
    if (cnt < (n + 1) / 2) {
        cout << "NO" << endl;
        return;
    }
 
    for (int i = 0; i < n; i++) {
        if (a && ans[i] == 'N') {
            a--;
            ans[i] = 'R';
        }
        else if (b && ans[i] == 'N') {
            b--;
            ans[i] = 'P';
        }
        else if (c && ans[i] == 'N') {
            c--;
            ans[i] = 'S';
        }
    }
 
    cout << "YES\n";
    cout << ans << endl;
    
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}