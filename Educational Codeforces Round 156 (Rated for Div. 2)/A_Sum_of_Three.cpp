/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */

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
        int temp = n;

        vector<int> v(3);

        if((n/2) % 3 != 0)
        {
            v[0] = n/2;

            n = n - v[0];

            for(int i = 1; i<=n-1; i++)
            {
                if(i%3 != 0 && (n-1)%3 != 0)
                {
                    v[1] = i;
                    v[2] = n-1;
                }
                else 
                {
                    v[1] = i+1;
                    v[2] = n-2;
                }
            }
        }
        else 
        {
            v[0] = n/3;

            n = n - v[0];

            for(int i = 1; i<=n-1; i++)
            {
                if(i%3 != 0 && (n-1)%3 != 0)
                {
                    v[1] = i;
                    v[2] = n-1;
                }
                else 
                {
                    v[1] = i+1;
                    v[2] = n-2;
                }
            }
        }

        if(v[0] + v[1] + v[2] == temp)
        {
            cout<<"YES"<<endl;
            for(auto i : v)
                cout<< i << " ";
            cout<<endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}