#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int zero = 0, zz = 0;
        for(int i = 0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x < 0)
                zero++;
            else if (x == 0)
                zz++;
        }
        if(zz || zero % 2)
            cout  << 0 << endl;
        else
            cout << 1 << endl << 1 << " " << 0 << endl;
    }
}