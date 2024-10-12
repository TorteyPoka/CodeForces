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


/*
    n = 6 = 110;
    n - 1 = 5 = 101
    2 = 010
    1 = 001

    16 = 1 2 4 8 16 / NO (power of 2)
    18 = 1 2 3 6 9 18 / YES
    22 = 1 2 11 22 / YES
    24 = 1 2 3 4 6 8 12 24 / YES
    32 = 1 2 4 8 16 32 / NO (power of 2)
*/

void crack()
{
    int n; cin>>n;
    bitset<64> bits;
    bits = n;
    int cnt = bits.count();
    cerr << bits << ": " << cnt << endl; 
    if(cnt == 1){
        cout << "NO" << endl;
    }
    else cout << "YES" << endl;
}


int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}