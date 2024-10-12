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

void Answer()
{
    int n, k;
    cin >> n >> k;
    priority_queue<pair<int, int>> pq;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pq.push(make_pair(x, -i));
    }

    vector<int> ans;

    while (!pq.empty())
    {
        int a = pq.top().first;
        int b = pq.top().second;
        a -= k;
        pq.pop();
        if (a > 0)
        {
            pq.push(make_pair(a, b));
        }
        else
        {
            ans.push_back(b * -1);
        }
    }

    for (auto x : ans)
        cout << x << " ";
    cout << endl;
    // while(!pq.empty()){
    //     cerr << pq.top().first << " " << pq.top().second << endl;
    //     pq.pop();
    // }
    // cerr << endl;
}

bool comp(pair<int,int>p1, pair<int,int>p2){
    return p1.first>p2.first;
}
void crack()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        vp.push_back(make_pair((x-1+k)%k, i+1));
    }

    sort(vp.begin(), vp.end(),comp);

    for(auto x : vp)cout << x.second << " ";
    cout << endl;
    // for(auto y : vp){
    //     cout << y.second << " ";
    // }
    // cout << endl;
}

int32_t main()
{
    faf auto st = clock();
    test
    // Answer();
    crack();
    cerr << 1.0 * (clock() - st) / CLOCKS_PER_SEC << endl;
    return 0;
}