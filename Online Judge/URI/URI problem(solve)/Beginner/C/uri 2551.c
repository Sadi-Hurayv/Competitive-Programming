#include<stdio.h>
int main()
{
    int t, min, dis, i, j;
    double ave, tave;
    while(scanf("%d",&t)!=EOF)
    {
        int arr[t];
        j=0;
        tave=0;
        for(i=0; i<t; i++)
        {
            scanf("%d %d",&min,&dis);
            ave=dis/(min*1.00);
            if(ave>tave)
            {
                arr[j]=i+1;
                j+=1;
                tave=ave;
            }
        }
        for(i=0; i<j; i++)
        {
            printf("%d\n",arr[i]);
        }
    }
    return 0;
}
