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

vector<int> v;

void crack()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] <= n)
            cnt++;
    }
    cout << cnt << endl;
}

int32_t main()
{
    faf auto st = clock();
    for (int i = 1; i <= 9; ++i)
    {
        int pw = i;
        int cur = 0;
        for (int j = 1; j <= 9; ++j)
        {
            cur += pw;
            v.push_back(cur);
            pw *= 10;
        }
    }
    sort(v.begin(), v.end());
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}