/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// #define int long long

#define faf ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define test  \
    int T;    \
    cin >> T; \
    while (T--)

void crack()
{
    int n;
    cin >> n;
    set<int> ans;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0 && ans.count(i) == 0)
        {
            ans.insert(i);
            n/=i;
            break;
        }
    }
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0 && ans.count(i) == 0){
            ans.insert(i);
            n/=i;
            break;
        }
    }
    if(ans.size() != 2 || ans.count(n) || n == 1){
        cout << "NO";
    }
    else{
        cout << "YES" << endl;
        ans.insert(n);
        for(auto i : ans)cout << i << " ";
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