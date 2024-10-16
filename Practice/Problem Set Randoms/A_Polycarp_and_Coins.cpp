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
    int c1,c2, val;
    c1 = c2 = 0;
    c1 = val / 3;
    if (val - 3 * c1 == 2) {
        c2 = c1 + 1;
    } else if (val - 3 * c1 == 1) {
        c2 = c1;
        c1++;
    } else {
        c2 = c1;
    }
   cout << c1 << " " << c2 << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}