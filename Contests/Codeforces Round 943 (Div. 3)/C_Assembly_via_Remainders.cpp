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

//! dividend - (divisor*q);

void crack()
{
    int n;
    cin >> n;

    int q = 1;
    int x = 0;

    int r;
    cin >> r;

    int y = r + 1;

    cout << y << " ";

    int sY = y;

    for (int i = 1; i < n; i++)
    {
        x = sY * q + r;
        cout << x << ' ';
        y = x;
        q = x / sY;
        sY = y;
        if (i < n - 1)
            cin >> r;
    }
    cout << endl;
}

void crack1()
{
    int n;
    cin>>n;

    int p;
    cin>>p;
    vector<int>ans;
    ans.push_back(p+1);
    ans.push_back(p+p+1);
    for(int i = 2; i < n;i++)
    {
        int q;
        cin>>q;
        if(q > ans[i-1])
        {
            ans.push_back(ans[i-1]+q);
        }
        else
        {
            ans.push_back(q);
        }
    }
    for(auto x:ans)cout << x << " ";
    cout << endl;


}

void craak()
{
    int n; 
    cin>>n;
    int ar[n];
    for(int i = 0; i<n-1; i++)
    {
        cin>>ar[i];
    }
    vector<int>res;
    res.push_back(ar[n-2]);
    for(int i = n-2; i>=0; i--)
    {
        res.push_back(ar[i]+ar[i-1]);
    }
    res.push_back(ar[0] + 1);
}



int32_t main()
{
    faf 
    // auto st = clock();
    test
    crack1();
    // cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}