/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, p;
    cin>>n>>p;

    int ans = INT_MIN;
    int cnt = 1;

    for(int i = 1; i<n; i++)
    {
        int x;
        cin>>x;
        if(p <= x)
            cnt++;
        else
        {
            ans = (ans >= cnt? ans : cnt);
            cnt = 1;
        }
        p = x;
    }

    cout << max(ans,cnt) << endl;

    return 0;

}