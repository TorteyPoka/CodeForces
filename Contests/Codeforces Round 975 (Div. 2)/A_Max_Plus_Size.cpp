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
    int n;
    cin >> n;
    int ar[n];
    int maxe = INT32_MIN, ans = INT32_MIN, sz = 0;
    for(int i = 1; i<=n; i++)cin>>ar[i];
    for(int i = 1; i<=n; i+=2){
        maxe = max(maxe, ar[i]);
        sz++;
    }
    ans = maxe + sz;
    maxe = INT32_MIN, sz = 0;
    for(int i = 2;i<=n; i+=2){
        maxe = max(maxe, ar[i]);
        sz++;
    }
    ans = max(ans, maxe + sz);
    cout << ans << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}