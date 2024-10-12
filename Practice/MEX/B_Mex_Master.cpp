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
int get_mex(map<int, int> &freq)
{
    int mex = 0;
    while (freq[mex])
        mex++;
    return mex;
}

void crack()
{
    int n;
    cin >> n;
    int ar[n];
    int zer = 0, one = 0, rest = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] == 0)
            zer++;
        else if (ar[i] == 1)
            one++;
        else
            rest++;
    }
    if (rest + one + 1 >= zer)
    {
        cout << 0 << endl;
    }
    else if (one == 0 || rest > 0)
    {
        cout << 1 << endl;
    }
    else
        cout << 2 << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}