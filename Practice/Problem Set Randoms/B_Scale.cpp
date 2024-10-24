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
    int n, k;
    cin>>n>>k;
    char metrix[n][n];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>metrix[i][j];
        }
    } 

    for(int i = 0; i<n; i+=k){
        for(int j = 0; j<n; j+=k){
            cout << metrix[i][j];
        }
        cout << endl;
    }
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