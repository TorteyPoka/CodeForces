/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fastIO

    int a, b;
    cin>>a>>b;

    int mx = max(a,b);
    int numerator = 6 - mx+1;
    int denom = 6;
    int g = __gcd(numerator, denom);
    numerator /= g;
    denom /= g;
    cout << numerator << "/" << denom << endl;

    return 0;
}