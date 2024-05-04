/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define test int T; cin>>T; while(T--)
#define inputar(ar, n) for(int i = 0; i<n; i++)cin>>ar[i];
#define printar(ar, n) for(int i = 0; i<n; i++) cout << ar[i] << " "; cout << endl;
#define printvec(v) for(auto x : v) cout << x << " "; cout << endl;
#define all(v) v.begin(), v.end()

void crack()
{
    int n;
    cin>>n;

    if(n % 2)
    {
        cout << n-1 << endl;
    }
    else cout << n / 2 << endl;
}

int32_t main()
{
    faf auto st = clock(); 
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}