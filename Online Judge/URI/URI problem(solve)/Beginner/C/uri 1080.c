#include<stdio.h>
/*int main()
{
    int num, i, pos, max=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&num);
        if(num>max)
        {
            max=num;
            pos=i+1;
        }
    }
    printf("%d\n%d\n",max,pos);
    return 0;
}*/

int main()
{
    int i, num[100], max, pos;
    for(i=0; i<100; i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];
    pos=1;
    for(i=1; i<100; i++)
    {
        if(num[i]>max)
        {
            max=num[i];
            pos=i+1;
        }
    }
    printf("%d\n%d\n",max,pos);
    return 0;
}

/// What's the wrong with the code below. in uri it shows 50% wrong!!!
/*int main()
{
    int num[100], high, pos, i, j, count=0;
    for(i=0; i<100; i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0; i<100-1; i++)
    {
        for(j=i+1; j<100; j++)
        {
            count++;
            if(num[j]>num[i])
            {
                high=num[j];
                pos=j+1;
                break;
            }

            else
            {
                high=num[i];
                pos=i+1;
            }
        }
        i=j;
        if(count==99)
            break;
    }
    printf("%d\n",high);
    printf("%d\n",pos);
    return 0;
}*/
