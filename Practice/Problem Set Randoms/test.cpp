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

int cnt = 0;
void crack()
{
    char a;
    string b , c;
    cin>>a;
    cin>>b>>c;
    if(a == 'I' and b == "love" and c == "you")cnt++;
}

signed main()
{
    faf auto st = clock();
    test
    {
        //cout << "Case " << ++tc << ": ";
        crack();

    }
    cout << cnt << endl;
    //cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}