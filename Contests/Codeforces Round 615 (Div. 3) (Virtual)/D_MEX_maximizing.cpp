/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

    int q, x;
    cin>>q>>x;
    vector<int>mod(x);
    set<pair<int,int>>pts;
    for(int i = 0; i<x; i++){
        pts.insert(make_pair(mod[i], i));
    }   
    for(auto i : mod)cerr << i << " ";
    cerr << endl;
    for(auto i : pts)cerr << i.first << " " << i.second << endl;
    cerr << endl;
    
    for(int i = 0; i<q; i++){
        int n; cin>>n;
        n%=x;
        pts.erase(make_pair(mod[n], n));
        mod[n]++;
        pts.insert(make_pair(mod[n], n));
        cout << pts.begin()->first * x + pts.begin()->second << endl;
    }

    return 0;
}