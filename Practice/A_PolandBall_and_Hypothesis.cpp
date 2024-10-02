#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define N 1000000

vector<bool>prime(N+1, true);

void sieve()    
{
    for (int p = 2; p * p <= N; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= N; i += p)
                prime[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    sieve();

    int n;
    cin>>n;

    int m = 1;

    while(1)
    {
        if(prime[n*m+1] == false)
            break;
        m++;
    }
    cout << m << endl;

    return 0;
}