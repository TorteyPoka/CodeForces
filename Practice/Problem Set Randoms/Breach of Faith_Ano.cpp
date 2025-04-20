#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define F first
#define S second
#define all(a)  a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(x) ((int)(x).size())
#define int long long
#define popcount(x) __builtin_popcountll(x)
//__builtin_clzll()->leading zeros in binary
#define inf 1e18
#define el "\n"
#define Bassmala ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
vector<int> take(int n){
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    return v;
}
 
//--------------------------------global variables----------------------------------//
//---------------------------------functions----------------------------------------//
//-----------------------------------code-------------------------------------------//
void pewpew(){
    int n;cin>>n;
    vector<int>v=take(n*2);
    sort(all(v));
    int start=v.back();
    cout<<start<<" ";
    v.pop_back();
    int sum=0;
    for(auto x : v)cerr << x << ' ';
        cerr << el;
    for(int i=0;i<n*2-2;i++){
        cout<<v[i]<<" ";
        sum+=(i&1?-v[i]:v[i]);
    }

    if(sum+v.back()>start){
        cout<<v.back()<<" "<<sum+v.back()-start<<el;
    }else{
        cout<<start-(sum-v.back())<<" "<<v.back()<<el;
    }
}
//----------------------------------------------------------------------------------//
signed main()
{
    /* ☯︎☯︎☯︎ */    Bassmala    /* ☯︎☯︎☯︎ */
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt","w",stdout);
    int x_x = 1;
    cin >> x_x;
    while (x_x--) {
        pewpew();
    }
    return 0;
}