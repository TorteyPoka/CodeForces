/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

/*
void SieveOfEratosthenes(ll n) 
{ 
    
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    bool prime[n + 1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (ll p = 2; p * p <= n; p++) { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) { 
            // Update all multiples of p greater than or 
            // equal to the square of it numbers which are 
            // multiple of p and are less than p^2 are 
            // already been marked. 
            for (ll i = p * p; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Prll all prime numbers 
    for (ll p = 2; p <= n; p++) 
        if (prime[p]) 
            prllf("%d ",p); 
} 

*/
// vector<bool> primes(1000000000000, true);

// void SieveOfEratosthenes()
// {
//     for (ll p = 2; p * p <= 1000000000000; p++)
//     {
//         if (primes[p] == true)
//         {
//             for (ll i = p * p; i <= 1000000000000; i += p)
//                 primes[i] = false;
//         }
//     }
// }

int main()
{
    // SieveOfEratosthenes();
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n;
    cin >> n;
    ll ar[n];

    for (ll i = 0; i < n; i++)
    {
        ll count = 0;
        ll f = 1;
        ll p = 0;
        ll inv = 0;
        ll looper = 0;
        vector<ll>res;

        cin >> ar[i];

        // if(ar[i] == 999966000289)
        // {
        //     cout<<"YES"<<endl;
        //     break;
        // }
        
        for (ll j = 1; j <= ar[i]; j++)
        {
            // cout << j << " " << p << " " << count << " " << ar[i] % j << endl;
            if (ar[i] % j == 0)
            {
                res.push_back(j);
                count++;
                p++;
            }
            if (count > 3)
            {
                looper = 1;
                f = 0;
                cout << "NO" << endl;
                break;
            }
        }
        if (res.size() < 3)
        {
            cout << "NO" << endl;
            inv = 1;
        }
        else if (!looper)
        {
            if (res[1] < 4)
            {
                cout<<"YES"<<endl;
                continue;
            }
            else
                for (ll k = 2; k < res[1]; k++)
                {
                    if (res[1] % k == 0)
                    {
                        cout<<"NO"<<endl;
                        inv = 1;
                        break;
                    }
                }
        }
        if (!inv && f)
            cout << "YES" << endl;

        // for (auto i : res)
        //     cout << i << " ";
        // cout << endl;
    }
    // ll count = 0, f = 0;

    // for (ll i = 0; i < n; i++)
    // {
    //     cin >> ar[i];
    //     if (primes[ar[i]])
    //     {
    //         cout << "NO" << endl;
    //     }
    //     else
    //     {
    //         for (ll p = 1; p <= ar[i]; p++)
    //         {
    //             if (primes[p])
    //                 count++;

    //             if (count > 3)
    //             {
    //                 cout << "NO" << endl;
    //                 f = 1;
    //                 break;
    //             }
    //         }
    //         if (!f)
    //             cout << "YES" << endl;
    //     }
    // }

    return 0;
}