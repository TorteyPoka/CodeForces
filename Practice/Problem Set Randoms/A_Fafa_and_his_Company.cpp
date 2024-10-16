/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

    int n;
    cin>>n;
    int ans = 1;
    for(int i = 2; i<=n; i++){
        if((n - i) % i == 0 && n-i != 0){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}