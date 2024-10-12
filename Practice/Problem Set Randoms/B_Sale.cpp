/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

    int n, m;
    cin>>n>>m;
    int ar[n];
    for(int i = 0; i<n; i++){
        cin>>ar[i];
    }   
    sort(ar, ar+n);
    int sum = 0;
    for(int i = 0; i<m; i++){

        if(ar[i] < 0) {
            sum += abs(ar[i]);
        }
        else break;
    }
    // if(sum < 0) sum *= -1;
    cout << sum << endl;

    return 0;
}