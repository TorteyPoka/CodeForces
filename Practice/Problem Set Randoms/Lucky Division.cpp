#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n == 47)
    {
        cout << "YES";
    }
    else if(n%4==0 || n%7==0)
    {
        cout<<"YES";
    }
    else cout << "NO";

return 0;
}