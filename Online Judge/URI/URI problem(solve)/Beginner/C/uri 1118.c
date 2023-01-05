#include<stdio.h>
int main()
{
    int i, count, x;
    float sc, ave, sum;
    read:
    ave=0;
    sum=0;
    count=0;
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
    eror:
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&x);
    if(x==1)
        goto read;
    else if(x==2)
        goto end;
    else
        goto eror;
    end:
    return 0;
}

