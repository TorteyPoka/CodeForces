#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include<bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------Defines----------------------------------------------------------------------------*/

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define int long long int
#define endl '\n'
#define pd push_back
#define all(a) (a).begin(),(a).end()
const int mod = 1000000007;

/*----------------------------------------------------Debugging-----------------------------------------------------------------------------*/

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(float t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


/*--------------------------------------------------Struggle starts----------------------------------------------------------------------*/



void solve() {
    int n;
    cin>>n;
    vector<int>a(n);

    for(int i = 0; i<n; i++)cin>>a[i];

    sort(all(a));


    int index, ans = 0;

    if(n % 2)index = n/2;
    else index = n / 2 - 1;

    for(int i = index; i<n; i++)
    {
        if(a[i] == a[index])ans++;
        else break;
    }
    cout << ans << endl;
}

/*
    1. greedy (may be priority queue)
    2. min / max (may be binary search)
    3. string (may be store index in a set)
    4. make EXAMPLE
    5. dp
*/

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;

    /*
        Sorting using cmp --> return boolen in which order
        order you want to Sort

        using pbds

        using only less --> normal set
        using less_equal --> lower_bound gives result like upper
                             bound in multiset and vice versa

        eg ->  for in desecnding order --> return (a > b);

        We can use lower bound on vector<vector<T>> --> gives
        iterator with longest common prefix
        ie index i  and i - 1 are possible answer for longest common prefix;
    */
}