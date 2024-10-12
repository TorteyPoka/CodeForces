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
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    int mx = max({a, b, c});
    int needed = abs(mx - a) + abs(mx - b) + abs(mx - c);
    if (needed <= n)
    {
        if ((n - needed) % 3)
            cout << "NO";
        else
            cout << "YES";
    }
    else
        cout << "NO";
    cout << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}