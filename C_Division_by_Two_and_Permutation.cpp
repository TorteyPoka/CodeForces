#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];

        float div_n = (float)n / 2;

        int target_sum = div_n * (1 + n);

        int got_sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            got_sum += ar[i];
        }

        sort(ar, ar + n, greater<int>());

        int sameC = 0;

        for (int i = 0; i < n && sameC < 2; i++)
        {

            if (ar[i] > n && sameC == 0)
            {
                int y = ar[i] / n;
                ar[i] = ar[i] / y;
            }
            if (i == n - 1)
            {
                sort(ar, ar + n, greater<int>());
                i = 0;
                sameC++;
            }
            if (ar[i] == ar[i + 1] && sameC == 1)
            {
                ar[i] = ar[i] / 2;
                i+=1;
            }
        }
         for(int i = 0; i < n; i++)
            cout<< ar[i] << " ";
            cout<<endl;
    }
}