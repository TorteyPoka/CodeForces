#include<bits/stdc++.h>
using namespace std;

    // @author : TorteyPoka

#define test  \
    int T;    \
    cin >> T; \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
#define int long long
/*------------X------------*/


void crack()
{
    int n;
    cin>>n;
    int ans = n/4;
    n-=(ans*4);
    if(n){
        cout << ans + n/2 << endl;
    }
    else cout << ans << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    {
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}   