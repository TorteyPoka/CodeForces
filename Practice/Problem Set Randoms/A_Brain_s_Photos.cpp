/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO
    int n, m;
    cin>>n>>m;
    char c;
    bool colored = false;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cin>>c;
            if(c == 'Y' || c == 'M'|| c == 'C'){
                colored = true;
            }
        }
    }
    if(colored)cout << "#Color" << endl;
    else cout << "#Black&White" << endl;
    return 0;
}