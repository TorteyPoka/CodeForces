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
    cin >> n;
    int ar[n];
    int eva = 0, oda = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if(i % 2 == 0 and ar[i] % 2 == 1){
            eva++;
        }
        else if(i % 2 == 1 and ar[i] % 2 == 0){
            oda++;
        }
    }
    if(eva != oda)cout << -1 << endl;
    else cout << eva << endl;

}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}   