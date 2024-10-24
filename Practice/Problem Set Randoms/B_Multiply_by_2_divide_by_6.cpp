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
    int thr = 0, tw = 0;
    while(n % 3 == 0){
        n/=3;
        thr++;
    }
    while(n % 2 == 0){
        n/=2;
        tw++;
    }
    if(n != 1 or thr < tw){
        cout << -1 << endl;
    }
    else cout << thr - tw + thr << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}