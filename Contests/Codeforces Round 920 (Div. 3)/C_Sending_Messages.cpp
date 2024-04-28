/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll T;
    cin >> T;
    while (T--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        ll ar[a];

        for (ll i = 0; i < a; i++)
            cin >> ar[i];
        if(a == 1 && b == ar[0]){
            cout << "NO" << endl;
            continue;   
        }

        if ((a * c) < b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}