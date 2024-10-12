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
    int ar[n];
    set<int> MEX;
    for (int i = 0; i <= n; i++)
    {
        MEX.insert(i);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    vector<int> p;

    for (int i = 0; i < n; i++)
    {
        int mex = *MEX.begin();
        if(ar[i] > 0){
            mex += ar[i];
        }
        if(ar[i] > 0){
            p.push_back(mex - ar[i]);
            MEX.erase(mex-ar[i]);
        }
        else p.push_back(mex + abs(ar[i])), MEX.erase(mex + abs(ar[i]));
    }

    for (auto i : p)
        cout << i << " ";
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