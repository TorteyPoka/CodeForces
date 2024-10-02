#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p, q, count(0);
    for(int i=n; i>0; i--)
    {
        cin>>p>>q;
        if(p<=q-2)  
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}