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
    string s;
    cin>>s;
    int n = s.size();
    int zr = 0, on = 0;

    for(int i = 0; i<n; i++){
        if(s[i] == '0')zr++;
        else on++;
    }
    cerr << zr << " " << on << endl;
    if(min(zr, on) % 2){
        cout << "DA" << endl;
    }
    else cout << "NET" << endl;
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