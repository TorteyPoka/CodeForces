/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

    int T;cin>>T;
    while(T--){
        string s;
        cin>>s;
        int tot = 10;
        tot *= (s[0] - '0') - 1;
        cout << tot + ((s.size() * (s.size() + 1)) / 2) << endl;
    }

    return 0;
}   