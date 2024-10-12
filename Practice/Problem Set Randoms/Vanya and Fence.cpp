#include<iostream>

using namespace std;

int main()
{
    int n, h, sum(0);
    cin>>n>>h;
    int per[n];
    for(int i=0; i<n; i++)
    {
        cin>>per[i];
        if(per[i] > h)
        {
            sum+=1;
        }
        sum++;
    }
    cout<<sum;

    return 0;
}