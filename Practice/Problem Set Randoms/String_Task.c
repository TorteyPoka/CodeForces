 #include<stdio.h>
 #include<string.h>

 int main()
 {
    char w[100];
    scanf("%s", &w);

    int l=strlen(w);

    for(int i=0; i<l; i++)
    {
        if(w[i]!='a' && w[i]!='A' && w[i]!='e' && w[i]!='E' && w[i]!='i' && w[i]!='I' && 
             w[i]!='o' && w[i]!='O' && w[i]!='u' && w[i]!='U' && w[i]!='y' && w[i]!='Y')
            {
                if(w[i]<='Z') 
                  {
                    w[i]+=32;
                  }
                
                printf(".%c",w[i]);
            }
    }

    return 0;
}