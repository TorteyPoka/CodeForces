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

/*
    YES:
        1. qsnMark count is greater of equal to the size of string t;
        3. character index should be in increasing order;
    NO:
        
*/

void crack()
{
    string s, t; cin>>s>>t;
    vector<pair<int, char>>vp;
    int qsnMark = 0;
    for(int i = 0; i<s.size(); i++){

    }
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}