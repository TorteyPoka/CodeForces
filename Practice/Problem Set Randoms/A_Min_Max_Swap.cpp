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
    cin>>n;
    int ar[n], br[n];
    for(int i =0;i<n; i++){
        cin>>ar[i];
    }
    for(int i = 0; i<n; i++)cin>>br[i];
    int mxa = 0, mxb = 0;
    for(int i = 0; i<n; i++){
        if(ar[i] > br[i])swap(ar[i], br[i]);
        mxa = max(ar[i] , mxa);
        mxb = max(mxb, br[i]);
    }
    cout << 1LL*(mxa * mxb) << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}