#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i, k, j, sum;
    double l;
    char blink[10];
    for(i=0; i<3; i++)
    {
        sum=0;
        for(k=0; ; k++)
        {
            scanf("%[^\n]s",blink);
            getchar();
            if(strcmp(blink,"caw caw")==0)
                break;
            for(j=strlen(blink)-1, l=0; j>=0; j--, l++)
            {
                if(blink[j]=='-')
                    sum+=0*(pow(2,l));
                else if(blink[j]=='*')
                    sum+=1*(pow(2,l));
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
