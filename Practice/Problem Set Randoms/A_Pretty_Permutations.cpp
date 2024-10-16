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
    int tmp = n;

    if(n % 2){
        cout << "2 3 1 " << endl;
        for(int i = 4; i<=n; i+=2){
            cout << i + 1 << " " << i << " ";
        }
        cout << endl;
        return;
    }   
    for(int i = 2; i<=n; i+=2){
        cout << i << " " << i-1 << " ";
    }
    cout << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}