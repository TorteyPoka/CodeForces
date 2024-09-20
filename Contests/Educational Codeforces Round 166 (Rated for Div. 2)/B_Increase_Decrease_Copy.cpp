/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define test  \
    int T;    \
    cin >> T; \
    while (T--)

void crack()
{
    int n, minDiffLast = INT_MAX, totalDiff = 1;
    cin >> n;
    int ar[n], br[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = 0; i < n; i++)
        cin >> br[i];
    int last;
    cin >> last;

    bool gotLast = false;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == last && !gotLast){
            minDiffLast = 0;
            gotLast = true;
        }
        if(ar[i] > last && br[i] <= last && !gotLast){
            minDiffLast = 0;
            gotLast = true;
        }
        if(ar[i] < last && br[i] >= last && !gotLast){
            minDiffLast = 0;
            gotLast = true;
        }
        totalDiff += abs(ar[i] - br[i]);
        minDiffLast = min(minDiffLast, abs(last - ar[i]));
    }
    // cout << br[n] << " : ";
    // cout << minDiffLast << endl;
    cout << totalDiff + minDiffLast << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}