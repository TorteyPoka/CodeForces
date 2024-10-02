#include<bits/stdc++.h>

using namespace std; 

int main()
  {
    int count(0);
   char a;
   while(scanf("%c", &a) == 1)
   {
        if(a =='"')
        {
            count++;
            if(count%2)
                cout<<"``";
                else cout<<"''";
        }
        else{
            cout<<a;
        }
   }

   return 0;
  }