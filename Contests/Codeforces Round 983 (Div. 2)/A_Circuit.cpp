#include<bits/stdc++.h>
using namespace std;

    // @author : TorteyPoka

#define test  \
    int T, tc = 0;    \
    cin >> T; \
    while (T--)
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define endl '\n'
#define int long long
/*------------X------------*/

/*
    0 0 1 1 0 1 0 1 0 1
    1 1 1 1 1 = 
    1 1 
    1 1
    1 0
    0 0
    0 0    
*/

void crack()
{
    int n;
    cin>>n;
    n *= 2;
    int on = 0, zr = 0;
    for(int i = 1; i<=n; i++){
        int x;
        cin>>x;
        if(x == 1)on++;
    }
    // cerr << n << " " << on << endl;
    zr = n - on;

    if(!zr){
        cout << 0 << ' ' << 0 << endl;
        return;
    }
    if(on % 2){
        cout << 1 << " " << min({n/2, on, zr}) << endl;
    }
    else cout << 0 << " " << min({n/2, on, zr}) << endl;
} 

int32_t main()
{
    faf auto st = clock();
    test
    {
        //cout << "Case " << ++tc << ": ";
        crack();
    }
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}