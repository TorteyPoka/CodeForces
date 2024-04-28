#include <bits/stdc++.h>
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
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / __gcd(a, b)
#define watch(x) cout << (#x) << " is " << (x) << endl
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define possible cout << "POSSIBLE" << endl
#define impossible cout << "IMPOSSIBLE" << endl
#define noofsetbits(x) __builtin_popcount(x)

#define sortvec(v) sort(v.begin(), v.end())
#define revsortvec(v) sort(v.rbegin(), v.rend())
#define sortarr(a, n) sort(a, a + n)
#define revsortarr(a, n) sort(a, a + n, greater<int>())

#define faf                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repr(i, a, b) for (int i = a - 1; i >= b; i--)

#define inputarr(a, n) rep(i, 0, n) cin >> a[i];
#define inputvec(v, n) \
    rep(i, 0, n)       \
    {                  \
        int x;         \
        cin >> x;      \
        v.pb(x);       \
    }
#define printarr(a, n)                \
    rep(i, 0, n) cout << a[i] << " "; \
    cout << endl;
#define printvec(v)       \
    for (auto x : v)      \
        cout << x << " "; \
    cout << endl;
#define inputgraph(g, m) \
    rep(i, 0, m)         \
    {                    \
        int x, y;        \
        cin >> x >> y;   \
        g[x].pb(y);      \
        g[y].pb(x);      \
    }
#define printgraph(g, n)      \
    rep(i, 0, n)              \
    {                         \
        cout << i << ": ";    \
        for (auto x : g[i])   \
            cout << x << " "; \
        cout << endl;         \
    }
#define printpair(pair)                    \
    for (auto p : pair)                    \
        cout << p.f << " " << p.s << endl; \
    cout << endl;

#define printmap(m)  \
    for (auto x : m) \
        cout << x.f << " " << x.s << endl;
#define printset(s)       \
    for (auto x : s)      \
        cout << x << " "; \
    cout << endl;
#define printstack(s)           \
    while (!s.empty())          \
    {                           \
        cout << s.top() << " "; \
        s.pop();                \
    }                           \
    cout << endl;
#define printqueue(q)             \
    while (!q.empty())            \
    {                             \
        cout << q.front() << " "; \
        q.pop();                  \
    }                             \
    cout << endl;
#define printpriorityqueue(pq)   \
    while (!pq.empty())          \
    {                            \
        cout << pq.top() << " "; \
        pq.pop();                \
    }                            \
    cout << endl;

const int N = 1e5 + 5;
const int INF = LLONG_MAX;
const int MINF = LLONG_MIN;
const int MAX = 1e18;
const int MIN = -1e18;
const int dx[] = {-1, 0, 1, 0, -1, -1, 1, 1};
const int dy[] = {0, 1, 0, -1, -1, 1, 1, -1};
const char dir[] = {'U', 'R', 'D', 'L'};
const int M = 1e9 + 7;

int a[N], b[N], c[N];

void bin(unsigned n, vector<int> &bina)
{
    if (n > 1)
        bin(n / 2, bina);

    bina.pb(n % 2);
}

void solve()
{
    int n, k;
    vector<int> bina;
    cin >> n >> k;
    // bin(k, bina);

    // // printvec(bina);
    // int a = 1;
    // vector<int> nums;
    // rep(i, 0, bina.size())
    // {
    //     if (bina[i] == 1)
    //     {
    //         nums.pb(a);
    //     }
    //     a = a << 1;
    // }

    // if (k % 2 == 0)
    // {
    //     if (n % 2 == 0)
    //     {
    //         rep(i, 0, n - 2)
    //         {
    //             cout << 1 << " ";
    //             k -= 1;
    //         }
    //         cout << 2 << " " << k - 2 << endl;
    //     }
    //     else
    //     {
    //         rep(i, 0, n - 1)
    //         {
    //             cout << 2 << " ";
    //             k -= 2;
    //         }
    //         cout << k << endl;
    //     }
    //     return;
    // }
    for (int i = 0; i < n - 1; i++)
    {
        cout << 1 << " ";
        k -= 1;
    }
    cout << k << endl;

    // rep(i, 0, nums.size())
    // {
    //     cout << nums[i] << " ";
    // }
    // cout << endl;
}

void solve1()
{
    int n, k;
    cin >> n >> k;
    int temp = n;
    vector<int> b;
    // bin(k, b);
    int a = 1;
    vector<int> nums;
    for (int i = 0; i < n - 1; i++)
    {
        if (k - a >= 0)
        {
            nums.pb(a);
            k -= a;
        }
        else
            break;
        a = a << 1;
        temp--;
    }
    temp--;
    nums.pb(k);
    if (temp > 0)
    {
        for (int i = 0; i < temp; i++)
        {
            nums.pb(0);
        }
    }
    // else
    // int rem = n - nums.size();
    // if(k != 0)
    // {
    //     n/=rem;
    //     k = (k/n >= 0 ? k/n : k);
    //     rep(i, 0, n)
    //     {
    //         nums.pb(k);
    //     }
    // }

    rep(i, 0, nums.size())
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}
void solve2()
{
    int n, k;
    cin >> n >> k;
    int temp = n;

    int a = 1;
    rep(i, 0, n - 1)
    {
        if ((k - a) > 0)
        {
            cout << a << " ";
            k -= a;
        }
        else
        {
            break;
        }
        a <<= 1;
        temp--;
    }
    if (temp > 0)
    {
        cout << k << " ", temp--;
        for (int i = 0; i < temp; i++)
        {
            cout << 0 << " ";
        }
    }
    cout << endl;
}

//! 1st approach bit manipulation
int setBitNumber(int n)
{
    if (n == 0)
        return 0;
 
    int msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return (1 << msb);
}

//! 2nd approach bit manipulation
int setBitNumber2(int n)
{
    for(int i = 1; i < 32; i*=2)
    {
        n |= n >> i;
    }
    n = ((n + 1) >> 1) |
        (n & (1 << ((sizeof(n) * CHAR_BIT)-1)));
    return n;
}

void solve3() //* Accepted
{
    int n, k;
    cin >> n >> k;
    
    int x = setBitNumber2(k);

    if (n > 1)
    {
        //// cout << x << " " << endl;
        int q = x - 1;
        cout << q << " " << k - q << " ";
        n-=2;
        if(n > 0)
        {
            rep(i, 0, n)
            {
                cout << 0 << " ";
            }
        }
    }
    else cout << k ;
    cout << endl;
    
}
void solve4()
{
    int n, k;
    cin>>n>>k;
    vector<int>bina;
    bin(k, bina);
    printvec(bina);
    int a = 1;
    vector<int>nums;
    rep(i, 0, bina.size())
    {
        if(bina[i] == 1)
        {
            nums.pb(a);
        }
        a = a << 1;
    }
    cout << endl;
    printvec(nums);
    cout << endl;
    int l = nums.size();
    cout << nums[l-1] - 1 << " " << k - nums[l-1] - 1<< endl;
}
int32_t main()
{
    faf
    test
    {
        solve3();
    }
    return 0;
}
