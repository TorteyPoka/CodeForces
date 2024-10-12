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
    int x, y, n;
    cin >> x >> y >> n;
    if (n % x == y)
    {
        cout << n;
    }
    else
    {
        if (n % x > y)
        {
            n -= (n % x) - y;
        }
        else
        {
            n -= ((n % x) + (x - y));
        }
        cout << n;
    }
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