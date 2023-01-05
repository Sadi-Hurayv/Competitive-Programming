#include<stdio.h>
int main()
{
    int t, i, j, c=0;
    scanf("%d",&t);
    int arr[t];
    for(i=0; i<t; i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]>arr[1])
    {
        c=1;
        for(i=1; i<t-1; i++)
        {
            if(i%2==0)
            {
                if(arr[i]>arr[i+1])
                    c++;
                else
                    break;
            }
            else
            {
                if(arr[i]<arr[i+1])
                    c++;
                else
                    break;
            }
        }
    }
    else if(arr[0]<arr[1])
    {
        c=1;
        for(i=1; i<t-1; i++)
        {
            if(i%2==0)
            {
                if(arr[i]<arr[i+1])
                    c++;
                else
                    break;
            }
            else
            {
                if(arr[i]>arr[i+1])
                    c++;
                else
                    break;
            }
        }
    }
    if(c==t-1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
