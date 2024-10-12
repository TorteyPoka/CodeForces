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

const int N = 53;

/*
    1 7 8 4 5
    1 4 5 7 8
    1+4/2 = 2;
    5 7 8 2
    2 5 7 8
    2+5/2 = 3;
    7 8 3
    3 7 8
    3+7/2 = 5;
    8 5
    5 8
    5+8/2 = 6;
*/

void crack()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    while (n>1)
    {
        sort(ar, ar + n);
        int x = (ar[0] + ar[1]) / 2;
        for (int i = 0; i + 2 < n; i++)
        {
            ar[i] = ar[i + 2];
        }
        n--;
        ar[n - 1] = x;
    }
    cout << ar[0] << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}