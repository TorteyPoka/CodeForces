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
    int evSum =0, odSum = 0;
    while(n--){
        int x;
        cin>>x;
        if(x&1)odSum += x;
        else evSum += x;
    }    
    if(evSum <= odSum){
        cout <<"No" << endl;
    }
    else cout<< "YES" << endl;
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