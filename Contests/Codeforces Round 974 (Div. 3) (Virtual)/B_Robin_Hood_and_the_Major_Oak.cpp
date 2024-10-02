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
    int n, k; cin>>n>>k;

    int sum = 0;

    if(n <= k){
        sum = n*(n+1)/2;
    }
    else sum = (k*(k+1) / 2) + (n-k)*k;

    if(sum % 2){
        cout << "NO";
    }
    else cout << "YES";

    cout << endl;

    /*
        1 2 3 4 5 6 7 = 28
        
        n = 120, k = 15 NO
        n - k = 105
        105 to 120 odd = 105 107 109 111 113 115 117 119

        n = 121, k = 14 YES
        n - k = 107
        107 to 121 odd = 107 109 111 113 115 117 119 121

        n = 120, k = 14 NO
        n - k = 106
        106 to 120 odd = 107 109 111 113 115 117 119
        
        n = 121, k = 15 YES
        n - k = 106
        106 to 121 odd = 107 109 111 113 115 117 119 121

        n = 17, k = 5
        17 16 15 14 13 12

        n = 9, k = 4
        81 + 64 + 49 + 36


    */
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}