#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    int count = 0, c = 0, i;
    cin>>n;

    long long int ar[n];

    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    sort(ar,ar+n, greater<int>());

    for(i = 0; i<n; i++)
    {
        if(ar[i] == 4)
        {
            count++;
        }
        else if(ar[i] + ar[n-1] == 4)
        {
            count++;
            n--;
        }
        else if(ar[i] + ar[i+1] > 4)
        {
            count++;
        }
        else
        {
            c += ar[i];
            if(c==4 || i == n-1 && c>0)
            {
                count++;
                c = 0;
            }
        }

    }

    cout << count << endl;

    return 0;
}   