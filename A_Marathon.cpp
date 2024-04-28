#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define watch(x) cout << (#x) << " is " << (x) << endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define possible cout<<"POSSIBLE"<<endl
#define impossible cout<<"IMPOSSIBLE"<<endl
#define noofsetbits(x) __builtin_popcount(x)

#define sortvec(v) sort(v.begin(),v.end())
#define revsortvec(v) sort(v.rbegin(),v.rend())
#define sortarr(a,n) sort(a,a+n)
#define revsortarr(a,n) sort(a,a+n,greater<int>())

#define faf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define test int t;cin>>t;while(t--)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repr(i,a,b) for(int i=a;i>=b;i--)

#define inputarr(a,n) rep(i,0,n) cin>>a[i];
#define inputvec(v,n) rep(i,0,n) {int x; cin>>x; v.pb(x);}
#define printarr(a,n) rep(i,0,n) cout<<a[i]<<" "; cout<<endl;
#define printvec(v) for(auto x:v) cout<<x<<" "; cout<<endl;
#define inputgraph(g,m) rep(i,0,m) {int x,y; cin>>x>>y; g[x].pb(y); g[y].pb(x);}
#define printgraph(g,n) rep(i,0,n) {cout<<i<<": "; for(auto x:g[i]) cout<<x<<" "; cout<<endl;}
#define printpair(pair) for(auto p : pair)cout<<p.f<<" "<<p.s<<endl; cout << endl;

#define printmap(m) for(auto x:m) cout<<x.f<<" "<<x.s<<endl;
#define printset(s) for(auto x:s) cout<<x<<" "; cout<<endl;
#define printstack(s) while(!s.empty()) {cout<<s.top()<<" "; s.pop();} cout<<endl;
#define printqueue(q) while(!q.empty()) {cout<<q.front()<<" "; q.pop();} cout<<endl;
#define printpriorityqueue(pq) while(!pq.empty()) {cout<<pq.top()<<" "; pq.pop();} cout<<endl;

const int N=1e5+5;
const int INF=LLONG_MAX;
const int MINF=LLONG_MIN;
const int MAX=1e18;
const int MIN=-1e18;
const int dx[]={-1,0,1,0,-1,-1,1,1};
const int dy[]={0,1,0,-1,-1,1,1,-1};
const char dir[]={'U','R','D','L'};
const int M=1e9+7;

int a[N],b[N],c[N];

void solve()
{
    int a, b , c, d;
    cin>>a>>b>>c>>d;
    int cnt = 0;
    if(c > a) cnt++;
    if(d > a)cnt++;
    cout << cnt << endl;
}

int32_t main()
{
    faf
    test
    {
        solve();
    }
    return 0;
}
