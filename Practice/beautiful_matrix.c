#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n[5][5], b;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            scanf("%d", &n[i][j]);
            // if(n[i][j]==1)
            // {
            //     b = abs(2-i)+abs(j-2);
            // }
        }
    }
    
    printf("%d ", b);
    return 0;
}