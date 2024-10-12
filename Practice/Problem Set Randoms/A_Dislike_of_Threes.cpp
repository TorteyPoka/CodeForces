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

const int N = 1e4;
vector<int> dl;

void DL()
{
    for (int i = 1; i <= N; i++)
    {
        int lastDigit = i%10;
        if (i % 3 == 0 || lastDigit == 3)
        {
            continue;
        }
        else dl.push_back(i);
    }
}

void crack()
{
    int n;
    cin >> n;
    cout << dl[n-1] << endl;
}

int32_t main()
{
    faf auto st = clock();
    DL();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}