//Solved by Sakhawat Hossain Mahin

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void ans()
{
    ll n;
    cin >> n;
    vector<ll> ignored;
    ll start = INT32_MIN, end = INT32_MAX;

    while(n--)
    {
        ll a, b;
        cin >> a >> b;
        if(a == 1)
            start = max(start, b);
        else if(a == 2)
            end = min(end, b);
        else
            ignored.push_back(b);
    }

    cout << start << " " << end << endl;
    
    if(start > end) 
    {
        cout << 0 << endl;
        return;
    }

    ll ans = end - start + 1;
    for(auto i : ignored)
        if(i >= start && i <= end) --ans;

    // cout << start << " " << end << endl;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }

    return 0;
}