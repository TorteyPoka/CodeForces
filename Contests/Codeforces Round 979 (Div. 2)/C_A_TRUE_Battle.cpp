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
    string s;
    cin>>s; 
    if(s.front() == '1' || s.back() == '1' || s.find("11") != s.npos)cout << "YES" << endl;
    else cout << "NO" << endl;

    
    
}

int32_t main()
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