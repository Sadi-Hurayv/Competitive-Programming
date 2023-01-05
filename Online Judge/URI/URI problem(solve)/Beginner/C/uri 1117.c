#include<stdio.h>
int main()
{
    int i, count=0;
    float sc, ave, sum=0;
    for(i=0; ; i++)
    {
        scanf("%f",&sc);
        if(sc>=0&&sc<=10)
        {
            count++;
            sum+=sc;
            if(count==2)
            {
                ave=sum/2;
                break;
            }
        }
        else
            printf("nota invalida\n");
    }
    printf("media = %.2f\n",ave);
    return 0;
}
