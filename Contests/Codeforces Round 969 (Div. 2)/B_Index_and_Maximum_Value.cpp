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

const int N = 1e5+7;

// int ar[N];

void crack()
{
    int n, q;
    cin>>n>>q;
    int ar[n];
    for(int i = 1; i<=n; i++){
        cin>>ar[i];
    }
    vector<int>ans;

    while(q--){
        char c; int a , b;
        cin>>c; cin>>a>>b;

        int maxe = INT32_MIN;

        if(c == '-'){
            for(int i = a; i<=min(b,n); i++){
                ar[i] -= 1;
                maxe = maxe > ar[i] ? maxe : ar[i];
                // maxe = max(maxe, ar[i]);
            }
        }
        else{
            for(int i = a; i<=min(b,n); i++){
                ar[i] += 1;
                maxe = maxe > ar[i] ? maxe : ar[i];
                // maxe = max(maxe, ar[i]);
            }
        }
        ans.push_back(maxe);
    }

    for(auto i : ans) cout << i << " ";
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