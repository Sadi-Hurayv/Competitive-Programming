#include<stdio.h>
int main()
{
    int i, j, k=0, num;
    while(scanf("%d",&num)!=EOF)
    {
        k++;
        int count=0;
        for(i=1; i<=num; i++)
            for(j=1;j<=i; j++)
                count++;


        if(count==0)
            printf("Caso %d: %d numero\n",k,count+1);
        else
            printf("Caso %d: %d numeros\n",k,count+1);
        i=0;
        printf("%d",i);
        i++;
        for( ; i<=num; i++)
        {
            for(j=1;j<=i; j++)
            {
                printf(" %d",i);
            }
        }
        printf("\n\n");
    }
    return 0;
}
