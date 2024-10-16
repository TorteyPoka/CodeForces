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
    string s; 
    cin>>s;
    map<char, bool>used;
    for(int i = 1; i<n; i++){
        if(s[i] != s[i-1]){
            used[s[i-1]] = true;
            if(used[s[i]]){
                cout << "NO" << endl;
                return;                
            }
        }
    }
    cout << "YES" << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}