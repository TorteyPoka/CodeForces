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
    bool f = false;
    int num = 1;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
        mp[i]++;
    cout << 1 << " ";
    mp[1]--;
    for (int i = 2; i <= n; i++)
    {
        if (!mp[i])
            continue;
        mp[i]--;
        cout << i << " ";
        int num = i; // num is changing, cant use I instead;
        for (int g = 2 * num; g <= n; g += num)
        {
            cout << g << " ";
            mp[g]--;
            num = g;
        }
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