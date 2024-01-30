#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define N 50

vector<bool>prime(N, true);

void sieve()
{
    prime[0] = prime[1] = false;
    for(int i = 2; i<=N; i++)
    {
        if(prime[i])
        {
            for(int p = i*i; p<=N; p+=i)
                prime[p] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    sieve();

    int n,m;
    cin>>n>>m;

    int nextPrime;

    for(int i = n+1; i<=m; i++)
    {
        if(prime[i])
        {
            nextPrime = i;
            // cout << nextPrime << endl;
            break;
        }
    }

    if(nextPrime == m)
        cout<<"YES";
        else cout << "NO";
    return 0;
}