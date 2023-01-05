#include<stdio.h>
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        float arr[t], min;
        for(int i=0; i<t; i++)
        {
            scanf("%f",&arr[i]);
            if(i==0)
            {
                min=arr[0];
            }
            else
            {
                if(arr[i]<min)
                {
                    min=arr[i];
                }
            }
        }
        printf("%.2f\n",min);
    }
    return 0;
}
