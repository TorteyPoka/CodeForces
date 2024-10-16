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
    vector<int>a(n),b;
    for(int&x : a)cin>>x;
    b = a;
    sort(b.begin(), b.end());
    bool ok = true;
    for(int i = 0; i<n; i++)
    {
        if(b[i] % 2 == 0){
            if(a[i] % 2){
                ok = false;
                break;
            }
        }
        else if(a[i] % 2 == 0){
            ok = false;
            break;
        }
    }
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}