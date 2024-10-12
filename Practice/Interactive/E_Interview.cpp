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

const int N = 2 * 10e5 + 7;
int ar[N] = {0};
int pref[N] = {0};

void crack()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        pref[i] = pref[i - 1] + ar[i];
    }

    for (int i = 1; i <= n; i++)
        cerr << pref[i] << " ";
    cerr << endl;

    int start = 1, end = n, judge;
    while (start < end)
    {
        int mid = (start + end) / 2;

        cout << "? " << mid - start + 1;
        for (int i = start; i <= mid; i++)
        {
            cout << " "<< i;
        }
        cout << endl << endl;
        cout.flush();

        cin >> judge;

        int val = pref[mid] - pref[start - 1];
        // cerr << "Mid " << mid << " " << "Val " << val << " Judge " << judge << "\n";
        if(judge > val)end = mid;
        else start = mid+1;
    }

    // cout << "? " << start  <<endl << endl;
    // cout.flush();

    // cin >> judge;

    
    cout << "! " << start;
    cout << endl << endl;
    cout.flush();
}

int32_t main()
{
    // faf
    auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}