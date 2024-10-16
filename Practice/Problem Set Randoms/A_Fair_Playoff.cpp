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
    int p[4];
    cin>>p[0]>>p[1]>>p[2]>>p[3];
    int h = max(p[0] , p[1]);
    int h2 = max(p[2], p[3]);
    sort(p, p+4, greater<int>());
    if((h == p[0] and h2 == p[1]) or (h == p[1] and h2 == p[0])){
        cout << "YES" <<endl;
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