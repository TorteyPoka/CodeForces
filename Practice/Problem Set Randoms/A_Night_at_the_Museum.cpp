/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

    string s;
    cin>>s;
    int cnt = 0;
    char c = 'a';
    for(int i = 0; i<s.size(); i++){
        int mx = max(s[i], c);
        int mn = min(s[i], c);
        cnt += min(mx - mn, (mn - 'a') + ('z' - mx) + 1);
        c = s[i];
    }
    cout << cnt << endl;

    return 0;
}