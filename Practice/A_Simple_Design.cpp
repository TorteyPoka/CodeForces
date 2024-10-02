/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
#define ll long long
#define int long long

using namespace std;

int digit_sum(int num)
{
    int sum = 0, rem;
    while(num>0)
    {
        rem = num%10;
        sum = sum+rem;
        num = num/10;
    }
    return sum;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin>>T;
    while(T--)
    {
        int x, k;
        cin>>x>>k;

        while(digit_sum(x)%k != 0)
        {
            x++;
        }

        cout << x << endl;
    }
    return 0;
}