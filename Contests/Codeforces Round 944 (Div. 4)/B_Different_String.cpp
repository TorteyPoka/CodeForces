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
    string s;
    cin>>s;
    bool ok = false;
    for(int i = 0; i<s.size()-1; i++){
        if(s[i] != s[i+1]){
            ok = true;
            swap(s[i], s[i+1]);
            break;
        }
    }

    if(ok){
        cout << "YES" << endl;
        cout << s << endl;
    }
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