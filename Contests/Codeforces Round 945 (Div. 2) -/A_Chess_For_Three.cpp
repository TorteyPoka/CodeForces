/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// #define int long long

#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define test  \
    int T;    \
    cin >> T; \
    while (T--)

void crack()
{
    int a,b,c;cin>>a>>b>>c;
    if(c == 0){
        cout << 0 << endl;
        return;
    }
    else if(a == 0){
        cout << b << endl;
        return;
    }
    if((a+b+c) % 2 == 1){
        cout << -1 << endl;
        return;
    }
    
    if(a + b <= c){
        cout << a + b << endl;
    }
    else cout << a+a << endl;
    
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}