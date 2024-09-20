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
    int n, s, d; cin>>n>>s>>d;

    int maxTime = -1, vaya , firstX;
    cin>>firstX>>vaya;

    for(int i = 0; i<n-1; i++){
        int x, y;
        cin>>x>>y;
        maxTime = max(maxTime, (x - vaya));
        vaya = y;
    }   

    maxTime = max({maxTime, (d - vaya), firstX});
    if(maxTime >= s){
        cout << "YES";
    }
    else cout << "NO";
    cout<<endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}