/* Solved by Sakhawat Hossain Mahin, CSE-28th, SMUCT */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin>>n;

    int temp  = n, numCount = 0;
    vector<int> v;

    int divider[] = {0,1,10,100,1000,10000,100000,1000000,10000000,100000000};

    if(n < 10)
    {
        cout<<n<<endl;
        for(int i = 1; i<=n; i++)
            cout<< "1 "; 
    }
    else
    {
        while(temp)
        {
            numCount++;
            temp/=10;
        }

        int bin = n / divider[numCount];
        int rest = n%divider[numCount];

        for(int i = 1; i<=bin; ++i)
        {
            v.push_back(divider[numCount]);
        }
        for(int i = bin; i>0; i--)
        {
            if(rest != 0)
            {
                v[i]+=1;
                rest--;
            }
        }
    }

    for(auto i : v)
        cout<< i << " ";


    return 0;
}