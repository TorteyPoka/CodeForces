#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n, initial;
    cin >> n >> initial;

    int worst = initial, best = initial, cnt = 0;

    for(int i = 1; i<n; i++)
    {
        int x;
        cin>>x;
        
        if(x < worst)
        {
            cnt++;
            worst = x;
        }
        else if(x > best)
        {
            cnt++;
            best = x;
        }
    }
    cout << cnt;
    
    return 0;
}