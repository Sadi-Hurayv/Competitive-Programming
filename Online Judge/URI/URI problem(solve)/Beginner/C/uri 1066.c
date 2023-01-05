#include<stdio.h>
int main()
{
    int i, counte=0, counto=0, countp=0, countn=0, num[5];
    for(i=0; i<5; i++)
    {
       scanf("%d",&num[i]);
    }

    for(i=0; i<5; i++)
    {
        if(num[i]%2==0)
            counte++;
        else
            counto++;

        if(num[i]<0)
            countn++;
        else if(num[i]>0)
            countp++;
    }
    printf("%d valor(es) par(es)\n",counte);
    printf("%d valor(es) impar(es)\n",counto);
    printf("%d valor(es) positivo(s)\n",countp);
    printf("%d valor(es) negativo(s)\n",countn);
    return 0;
}
