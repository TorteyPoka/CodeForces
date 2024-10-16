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
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int ii = min({a,b,x,y});
    int II = max({a, b, x, y});
    if((a == ii and y == II) or (a == II and y == ii) or(b == II and x == ii) or(b == ii and x == II)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
} 

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}