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
    int ar[n];
    int mnx = INT32_MAX;    
    for(int i = 0; i<n; i++){
        cin>>ar[i];
        mnx = min(mnx, ar[i]);
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(ar[i] > mnx){
            ans += (ar[i] - mnx);
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}   