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
    int n, m, q; 
    cin>>n>>m>>q;

    int a, b, s;cin>>a>>b>>s;

    if(s <= a){
        cout << a - 1 << endl;
    }
    else if(s >= b) cout << n - b << endl;
    else cout << (b - a) / 2 << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}