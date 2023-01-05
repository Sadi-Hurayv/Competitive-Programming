#include<stdio.h>
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        int arr[t];
        int num, pos;
        for(int i=0; i<t; i++)
        {
            scanf("%d",&arr[i]);
        }
        scanf("%d",&num);

        int first=0, last=t-1, mid;
        while(first<=last)
        {
            mid=(first+last)/2;
            if(num>arr[mid])
            {
                first=mid+1;
            }
            else if(num<arr[mid])
            {
                last=mid-1;
            }
            else
            {
                pos=mid+1;
                break;
            }
        }
        int net=t, term=2;
        while(net>=term)
        {
            if(pos%term==0)
            {
                pos=0;
                break;
            }
            else if(pos<term)
            {
                break;
            }
            else
            {
                pos=pos-(pos/term);
                net=net-(net/term);
                term++;
            }
        }
        if(pos==0)
        {
            printf("N\n");
        }
        else
        {
            printf("Y\n");
        }

    }
    return 0;
}
