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
    int ans=0;
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (a >= c && b > d || a > c && b >= d)
        ans++;
    if (a >= d && b > c || a > d && b >= c)
        ans++;
    cout << ans * 2 << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}