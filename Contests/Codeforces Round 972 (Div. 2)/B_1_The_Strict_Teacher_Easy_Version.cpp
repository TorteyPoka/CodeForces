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
    int n, m, q, a, b, c;
    cin>>n>>m>>q>>a>>b>>c;
    int cnt = 0;
    if(c > b){
        cout << c - b << endl;
        return;
    }
    if(c < a){
        cout << a - c << endl;
        return;
    }
    if(a == c || b == c){
        cout << 0 << endl;
        return;
    }

    while(a != c || b != c){
        if(abs(a - c) < abs(b - c)){
            a++;
            cnt++;
            if(a == c)break;
            c++;
            if(b == c)break;
        }
        else{
            b--;
            cnt++;
            if(b == c)break;
            c--;
            if(a == c)break;
        }
    }

    cout << cnt << endl;


}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}