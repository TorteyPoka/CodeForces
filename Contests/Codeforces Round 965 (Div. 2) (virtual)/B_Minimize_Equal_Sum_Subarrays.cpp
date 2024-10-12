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

const int N = 2 * 1e5 + 7;
int ar[N];
int br[N];
void crack()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << ar[n - 1] << " ";
    for (int i = 0; i < n - 1; i++)
    {
        cout << ar[i] << " ";
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