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
    int n, k;
    cin >> n >> k;
    int sum = 0;
    int maxe = INT32_MIN;
    int mina = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        maxe = max(maxe, x);
        mina = min(mina, x);
        sum += x;
    }
    cerr << "Sum " << sum << endl;
    if (k)
    {
        sum += k;
        cerr << "Sum k " << sum << endl;
        int p = sum % maxe;
        cerr << "P " << p << endl;
        sum -= p;
        cerr << "Sum subtract " << sum << endl;
    }
    else{
        cout << min(mina, sum/maxe) << endl;
        return;
    }
    cerr << "Sum / Maxe " << sum / maxe  << endl;
    cout << min(n, sum / maxe) << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}