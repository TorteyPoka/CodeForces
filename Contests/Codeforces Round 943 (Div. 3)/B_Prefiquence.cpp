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
#define inputar(ar, n)          \
    for (int i = 0; i < n; i++) \
        cin >> ar[i];
#define printar(ar, n)          \
    for (int i = 0; i < n; i++) \
        cout << ar[i] << " ";   \
    cout << endl;
#define printvec(v)       \
    for (auto x : v)      \
        cout << x << " "; \
    cout << endl;
#define all(v) v.begin(), v.end()

void crack()
{
    int n, m;
    cin >> n >> m;
    string x, y;
    cin >> x >> y;

    map<char, int> mp;

    for (int i = 0; i < m; i++)
        mp[y[i]]++;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (mp[x[i]])
        {
            cnt++;
            mp[x[i]]--;
        }
        else
            break;
    }
    cout << cnt << endl;
}

void crack1()
{
    int n, m;
    cin >> n >> m;
    string s, q;
    sort(q.begin(), q.end());
    int cnt = 0;
    int start = 0, end = m - 1;
    while (start < end)
    {
        if (s[cnt] == q[start] )
        {
            cnt++;
            start++;
        }
        else if (s[cnt] == q[end])
        {
            cnt++;
            end--;
        }
        start++; end--;
    }
    cout << cnt << endl;
}
void crac()
{
    int n , m;
    cin>>n>>m;
    string sn, sm;
    cin>>sn>>sm;
    int i = 0, j =0, ans = 0;
    while(i < n && j < m) //! subsequences cannot be random . it should be contigeous.
    {
        if(sn[i] == sm[j])
        {
            i++, j++, ans++;
            continue;
        }
        j++;
    }
    cout << ans << endl;
}
int32_t main()
{
    faf
        // auto st = clock();
        test
        crac();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}