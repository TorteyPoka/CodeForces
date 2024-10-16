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
    string s1, s2;
    cin>>s1>>s2;
    bool ok = true;
    for(int i = 0; i<n; i++){
        if(s1[i] == 'G' || s1[i] == 'B'){
            if(s2[i] == 'R'){
                ok = false;
                break;
            }
        }
        else{
            if(s2[i] != 'R'){
                ok = false;
                break;
            }
        }
    }
    if(ok)cout << "YES" << endl;
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