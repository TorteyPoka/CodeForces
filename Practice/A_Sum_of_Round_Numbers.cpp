#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T, n;
    int ar[10000];
    cin >> T;
    while (T--)
    {
        int i = 0;
        int r = 0;
        cin >> n;

        if (n >= 1000)
        {
            r = n % 1000;
            ar[i++] = n - r;
            n %= 1000;
        }
        if (n >= 100)
        {
            r = n % 100;
            ar[i++] = n - r;
            n %= 100;
        }
        if (n >= 10)
        {
            r = n % 10;
            ar[i++] = n - r;
            n %= 10;
        }
        if (n < 10 && n > 0)
            ar[i++] = n;

        vector<int> v;
        
        for (int j = 0; j < i; j++){
            v.push_back(ar[j]);
            // cout << ar[j] << " pushed; ";
        }

        cout << v.size() << endl;

        for(auto i : v)
            cout << i << " "; 

        cout << endl;
    }

    return 0;
}