#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, k;
    cin>>n>>k;

    int time_left = (4 * 60);
    int cnt = 0;

    for(int i = 1; i<=n; i++)
    {
        if(k < time_left)
        {
            k += i*5;
            if(k <= time_left)
                cnt++;
            else break;
        }
    }
    cout << cnt;

    return 0;
}