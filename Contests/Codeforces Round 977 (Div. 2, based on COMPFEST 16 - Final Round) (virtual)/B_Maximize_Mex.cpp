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

const int N = 2 * 1e5 + 3;

void crack()
{
    int n, x;
    cin >> n >> x;
    int ar[n];
    int freq[N] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] <= n)
            freq[ar[i]]++;
    }

    int ans = n+1;

    for(int i = 0; i<=n; i++){
        if(freq[i] == 0){
            ans = i;
            break;
        }
        if(i + x <= n){
            freq[i+x] += freq[i] - 1;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}