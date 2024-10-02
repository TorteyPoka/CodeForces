#include<iostream>

using namespace std;

int main()
{
    int k,n,w;
    int sum=0;

    cin >> k >> n >> w;

    for(int i=1; i<=w; i++)
    {
        sum+=i;
    }
    int totalPrice = (sum*k);

    if(totalPrice-n>0)
    {
        cout<<totalPrice-n;
    }
    else{
        cout<<'0';
    }

    return 0;
}