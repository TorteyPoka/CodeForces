/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // int T;
    // cin >> T;
    // while (T--)
    // {
        int n;
        cin >> n;
        int sum = 0;

        vector<int>v;
        vector<int>::iterator ip;

        for(int i = 0; i<n; i++)
            cin>>v[i];

        ip = unique(v.begin(), v.end());
        v.resize(distance(v.begin(), ip));

        for (ip = v.begin(); ip != v.end(); ++ip) {
        cout << *ip << " ";
    }
    
        // for(int i = 0; i<n; i++)
        // {
        //     if()
        // }
        // cout << sum << endl;
    // }
    return 0;
}