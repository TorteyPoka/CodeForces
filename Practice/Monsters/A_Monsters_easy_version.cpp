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

#define all(v) v.begin(), v.end()

void crack()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    map<int, int> freq;
    for (int &x : ar)
    {
        cin >> x;
        freq[x]++;
    }
    sort(all(ar));

    for (auto i : ar)
        cerr << i << " ";
    cerr << endl;

    int ans = 0;

    int tulip = 1;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == tulip)
            tulip++;
        if (ar[i] > tulip)
        {
            ans += ar[i] - tulip;
            tulip++;
        }
    }

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