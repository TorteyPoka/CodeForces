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

void crack1()
{
    int n, m, k;
    cin>>n>>m>>k;
    int moves = 0;
    int alternate = false;
    while(m || n){
        if(alternate){
            m -= min(m, k);
            alternate = false;
        }
        else{
            n -= min(n, k);
            alternate = true;
        } 
        moves++;
    }
    cout << moves << endl;
}

void crack(){
    int n, m, k; 
    cin>>n>>m>>k;

    int a = (n + (k-1)) / k;
    int b = (m + (k-1)) / k;

    if(a <= b){
        cout << 2 * b << endl;
    }
    else cout << 2 * a - 1 << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}