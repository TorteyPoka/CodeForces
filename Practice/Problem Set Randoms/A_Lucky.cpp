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
    string s;
    cin>>s;
    if(((s[0] - '0') + (s[1] - '0') + (s[2] - '0')) == ((s[3] - '0') + (s[4] - '0') + (s[5] - '0'))){
        cout << "YES" << endl;
    }    
    else cout << "NO" << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}