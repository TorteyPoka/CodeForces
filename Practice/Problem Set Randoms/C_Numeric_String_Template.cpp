#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

const int N = 2*1e5 + 7;
int ar[N];

void solve()
{
    int n; cin>>n;
    for(int i = 0; i<n; i++){
        cin>>ar[i];
    }    
    
    int m; cin>>m;
    while(m--){
        string s;
        cin>>s;
        if(s.size() == n){
            map<int,char>mp;
            map<char, int>k;
            bool can = true;
            for(int i = 0; i<n; i++){
                if(k.find(s[i]) != k.end()){
                    if(k[s[i]] != ar[i]){
                        can = false;
                        break;
                    }
                }
                if(mp.find(ar[i]) != mp.end()){
                    if(mp[ar[i]] != s[i]){
                        can = false;
                        break;
                    }
                }
                k[s[i]] = ar[i];
                mp[ar[i]] = s[i];
            }
            if(can)cout << "YES" << endl;
            else cout << "NO" << endl;
        }  
        else cout << "NO" << endl;

    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}