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
    char ar[n][4];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<4; j++){
            cin>>ar[i][j];
        }
    }

    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<4; j++){
    //         cout << ar[i][j];
    //     }
    //     cout << endl;
    // }
    vector<int>ans;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<4; j++){
            if(ar[i][j] == '#'){
                ans.push_back(j+1);
            }
        }
    }

    for(int i = ans.size() - 1; i>=0; i--){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}