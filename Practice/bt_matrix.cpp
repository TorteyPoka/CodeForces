#include<iostream>

using namespace std;

int main()
{
    int n[5][5], m;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>n[i][j];
            if(n[i][j] == 1)
            m = abs(2-i) + abs(j-2);
        }
    }
    printf("%d ", m);

}