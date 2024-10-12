/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    int bill_count = 0;

    cin>>n;
    int ar[] = {100, 20, 10, 5, 1};

    for(int i = 0; i<5; i++)
    {
        bill_count+=n/ar[i];
        n = n%ar[i];
    }
    cout<<bill_count;
    return 0;
}