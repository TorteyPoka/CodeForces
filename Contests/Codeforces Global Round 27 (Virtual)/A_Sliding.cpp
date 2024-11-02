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
    2 3 1 2
    1,1 1,2 1,3
    2,1 2,2 2,3

    n - r = 1;
    m - c = 1;
*/

void crack()
{
    int n, m, r, c;
    cin>>n>>m>>r>>c;
    int totalPer = n*m;
    int left = (r-1) * m + c;

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