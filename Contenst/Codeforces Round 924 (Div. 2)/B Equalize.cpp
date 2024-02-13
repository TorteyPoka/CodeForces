/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */
#include<bits/stdc++.h>
#include "B Equalize.h"
#define ll long long
#define int long long

using namespace std;

void ans()
{
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    sort(ar, ar + n);

    int start = 0, end = n - 1;

    int similars = 1;

    int k;

    while (start != end)
    {
        cout << ar[end] << " " << ar[start] << endl;
        if ((ar[end] - ar[start]) <= n - 1)
        {
            k = end;
            // similars++;
            break;
        }
        end--;
    }

    for (int i = 0; i < k; i++)
    {
        if (ar[i] != ar[i + 1])
            similars++;
    }
    cout << similars << endl;
}

void ans1()
{
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    
    sort(ar,ar+n);

    int diff[n-1];

    for(int i = 0; i<n-1; ++i)
    {
        diff[i] = ar[i+1] - ar[i]; 
    }

    
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
        ans();
    }
    return 0;
}
