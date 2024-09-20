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
    string s;
    cin >> s;
    int n = s.size();
    int cnt = 0;
    bool alternate = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
            cnt++;
        else if (s[i] != s[i + 1] && cnt > 0)
        {
            cnt++;
        }
    }
    cout << cnt + 1 << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}