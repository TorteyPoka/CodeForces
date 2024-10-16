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
    for(int i = 0; i<n; i++){
        cin>>ar[i];
    } 
    sort(ar, ar+n);
    for(int i = 1; i<n; i++){
        if(ar[i] == ar[i-1]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" <<endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}