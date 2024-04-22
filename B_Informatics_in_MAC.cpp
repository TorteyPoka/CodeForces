/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define faf                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);

#define all(p) p.begin(), p.end()
#define pb push_back
#define pbmp(a, b) push_back(make_pair(a, b))

#define arrsize(array) (sizeof(array) / sizeof(array[0]))

#define fori0(n) for (int i = 0; i < (n); i++)
#define fori1(n) for (int i = 1; i <= (n); i++)

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / __gcd(a, b)
#define printVector(v)    \
    for (ll i : v)        \
        cout << i << " "; \
    cout << endl;

#define printPair(vp)                               \
    for (auto i : vp)                               \
        cout << i.first << " " << i.second << endl; \
    cout << endl;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define minusone cout << "-1\n"
#define MOD 1000000007
#define vp_compIncreaseFirst [](pair<int, int> p1, pair<int, int> p2) { return p1.first < p2.first; }
#define vp_compIncreaseSecond [](pair<int, int> p1, pair<int, int> p2) { return p1.second < p2.second; }
#define vp_compDecreaseFirst [](pair<int, int> p1, pair<int, int> p2) { return p1.first > p2.first; }
#define vp_compDecreaseSecond [](pair<int, int> p1, pair<int, int> p2) { return p1.second > p2.second; }

#define check_the(x) cout << x << "\n";

#define MAX_SIZE 10000007
vector<int> isprime(MAX_SIZE, true);
vector<int> prime;
vector<int> SPF(MAX_SIZE);

void sieve(int N)
{
    // complexity  O(N)
    isprime[0] = isprime[1] = false;

    for (int i = 2; i < N; i++)
    {
        if (isprime[i])
        {
            prime.push_back(i);
            SPF[i] = i;
        }
        for (int j = 0; j < (int)prime.size() && i * prime[j] < N && prime[j] <= SPF[i]; j++)
        {
            isprime[i * prime[j]] = false;
            SPF[i * prime[j]] = prime[j];
        }
    }
}
//-----------------------Prime Factors of a Number------------------//
// vector<int> getFactorization(int x){
//     vector<int> ret;
//     while (x !=  1 && x < SPF.size()) {
//         ret.push_back(SPF[x]);
//         x = x / SPF[x];
//     }
//     return ret;
// }
//------------------------Coprime-------------------------//
bool is_coprime(int a, int b)
{
    return (__gcd(a, b) == 1);
}
// -----------------------Number of Divisors--------------------- //
int Number_of_Divisors(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (i * i == n)
        {
            cnt++;
            continue;
        }
        cnt += 2;
    }
    return cnt;
}
//------------------------Sum of All numbers----------------------//
int sum_of_all(int n)
{
    return (n * (n + 1)) / 2;
}
//------------------------Number of Digits-----------------------//
int number_of_digits(int n)
{
    return floor(log10(n)) + 1;
}

signed main()
{
    faf int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        vector<int> used(n + 1, 0);

        fori0(n) cin >> v[i];

        vector<int> prefMex(n), sufMex(n);

        int res = 0;

        for (int i = 0; i < n; i++)
        {
            used[v[i]]++;
            while (used[res] > 0)
                res++;
            prefMex[i] = res;
        }
        fori0(n) used[i] = 0;
        res = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            used[v[i]]++;
            while (used[res] > 0)
                res++;
            sufMex[i] = res;
        }
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            if (prefMex[i] == sufMex[i + 1])
            {
                cout << 2 << endl;
                cout << 1 << " " << i + 1 << endl;
                cout << i + 2 << " " << n << endl;
                f = true;
                break;
            }
        }

        if (!f)
            cout << -1 << endl;
    }
    return 0;
}