/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
// #define int long long
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

const int N = 1e6 + 7;
int primes[N];

void sieve()
{
    primes[0] = primes[1] = 1;
    for (int i = 2; i <= N; i++)
    {
        if (!primes[i])
        {
            for (int j = i + i; j <= N; j += i)
            {
                primes[j] = 1;
            }
        }
    }
}

int32_t main()
{
    fastIO
    sieve();
    int n;
    cin >> n;
    int a = n / 2, b = a;
    if (n % 2)
        b++;

    while (!primes[a] || !primes[b])
    {
        a++;
        b--;
    }
    cout << a << " " << b << endl;
}