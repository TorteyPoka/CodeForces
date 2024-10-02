/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        ll n, x;
        cin >> n >> x;

        ll p, q, res;

        cin >> p;

        res = p;

        if(n>1){
            for (ll i = 1; i < n; i++)
            {
                cin >> q;
                if (res < (q - p))
                    res = (q - p);
                p = q;
            }
        }
        
        if (res < ((x - p) * 2)*1ll)
            cout << ((x - p) * 2)*1ll << endl;
        else
            cout << res << endl;
    }
    return 0;
}