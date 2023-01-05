#include<stdio.h>
int main()
{
    int num, i, count_in=0, count_out=0, arr;
    scanf("%d",&num);


    for(i=0; i<num; i++)
    {
        scanf("%d",&arr);

        if(arr>=10 && arr<=20)
        {
            count_in++;
        }

        else
        {
            count_out++;
        }

    }
    printf("%d in\n",count_in);
    printf("%d out\n",count_out);

    return 0;
}
