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
    string s, t;
    cin >> s >> t;

    if (s == t)
    {
        cout << s.size() + 1 << endl;
        return;
    }
    bool ok = true;
    int i;
    for (i = 0; i < min(s.size(), t.size()); i++)
    {
        if (s[i] != t[i])
        
        {
            ok = false;
            break;
        }
    }
    cerr << i << endl;
    if (ok)
    {
        cout << max(s.size(), t.size()) + 1 << endl;
    }
    else
    {
        if (i > 0)
        {
            cout << i + 1 + (s.size() - i) + (t.size() - i)<< endl;
        }
        else cout << s.size() +t.size() << endl;
    }
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}