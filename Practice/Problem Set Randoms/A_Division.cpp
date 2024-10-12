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
    int div = 0;
    if(n >= 1900){
        div = 1;
    }
    else if(n>=1600 and n<=1899){
        div = 2;
    }
    else if(n >= 1400 and n<=1599){
        div = 3;
    }
    else div = 4;

    cout << "Division " << div << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}