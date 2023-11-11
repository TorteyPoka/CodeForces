/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x < 4)
            cout << "NO" << endl;
        else if (x % 2 == 0 && x > 4)
            cout << "NO" << endl;
        else
        {
            double d = sqrt(x);
            int r = d;
            int f = 0;

            if (d == r)
            {
                for(int j = 2; j<r; j++)
                {
                    if(r%j==0)
                    {
                        f = 1;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
                if(!f)
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
            
        }
    }

    return 0;
}