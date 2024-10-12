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
    int x, y, k;
    cin >> x >> y >> k;

    int sum = 0;
    for(int i = 10000; i<10000 + k - 1; i++){
        cout << i << " " << i << endl;
        sum+=i;
    }
    cout << (x * k) - sum << " " << (y * k) - sum << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}