/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
#define ll long long
#define int long long

using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;

    vector<int>a(n),b(n);

    for(int i = 0; i < n; i++)
        cin>>a[i]>>b[i];

    int counter = 0;
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            if(a[i] == b[j])
                counter++;

    cout << counter;

    return 0;
}