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


void crack()
{
    int n;
    cin>>n; 
    int highMx = 0,highWid = 0, widMx = 0, widHigh = 0;
    while(n--){
        int x, y;
        cin>>x>>y;
        if(widMx < x){
            widMx = x;
            widHigh = y;
        }
        if(highMx < y){
            highMx = y;
            highWid = x;
        }
    }
    cout << widMx + highMx + (highMx - widHigh) + (widMx - highWid) + highWid + widHigh << endl;
}

int_fast32_t main()
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