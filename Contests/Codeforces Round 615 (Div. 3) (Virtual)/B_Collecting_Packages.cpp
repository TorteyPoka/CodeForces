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

// bool comp(pair<int,int>p1, pair<int,int>p2){
//     return p1.first <= p2.first;
// }

// void crack()
// {
//     int n;cin>>n;
//     vector<pair<int,int>>vp;
//     for(int i = 0; i<n; i++){
//         int x, y;
//         cin>>x>>y;
//         vp.push_back(make_pair(x, y));
//     }

//     sort(vp.begin(), vp.end());

//     for(int i = 0; i<vp.size(); i++){
        
//     }

//     for(auto i : vp) cerr << i.first << " " << i.second << endl;
//     cerr << endl;

// }
void crack(){
    int n;cin>>n;
    set<pair<int,int>>pts;
    for(int i = 0; i<n; i++){
        int x, y;
        cin>>x>>y;
        pts.insert(make_pair(x,y));
    }

    int lastUP = 0, lastR = 0;
    bool ok = true;
    string ans = "";
    int inner = 0;
    for(auto i : pts){
        if(lastR < i.first){
            inner = i.first - lastR;
            while(inner--){
                ans+='R';
            }
            lastR = i.first;
        }
        if(lastUP <= i.second){
            inner = i.second - lastUP;
            while(inner--){
                ans+='U';
            }
            lastUP = i.second;
        }
        else{
            ok = false;
            break;
        }
    }

    if(ok){
        cout << "YES" << endl << ans << endl;
    }
    else cout << "NO" << endl;
}
 
int32_t main()
{
    faf auto st = clock();
    test
    crack();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}