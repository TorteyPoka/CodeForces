/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin>>n>>k;

    n = (n+1)/2;

    if(n >= k)
    {
        cout << (k*2) - 1;
    }       
    else cout << (k - n) * 2 << endl;

    return 0;
}