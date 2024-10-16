/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.first == p2.first)return p1.second > p2.second;
}

int32_t main()
{
    fastIO

    int s, n;
    cin>>s>>n;
    vector<pair<int,int>>vp;
    while(n--){
        int x, y;
        cin>>x>>y;
        vp.push_back(make_pair(x, y));
    }

    sort(vp.begin(), vp.end(), comp);

    for(int i = 0; i<n; i++){
        if(vp[i].first > s){
            cout << "NO" << endl;
            return;
        }
        s+=vp[i].second;
    }
    
    return 0;
}