/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        if(s.size() % 2){
            cout << "NO" << endl;
        }
        else{
            string f, g;
            f = s.substr(0, s.size() / 2);
            g = s.substr(s.size() / 2, s.size());
            if(f == g){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
    }

    return 0;
}