#include<stdio.h>
int main()
{
    int anum, num, fnum, cas, count;
    printf("Enter the number of the case :");
    scanf("%d",&cas);
    printf("\n");
    int  aray[100], pos[100];



    for(int i=0; i<cas; i++)
    {
        printf("\nCase %d.",i+1);
        printf("\n--------\n");
        printf("Enter the number of the elements :");
        scanf("%d",&anum);

        printf("Enter the elements below.\n");

        for(int i=0; i<anum; i++)
        {
            scanf("%d",&aray[i]);
        }

        printf("Enter the number you want to find :" );
        scanf("%d",&fnum);

        count=0;
        for(int i=0; i<anum; i++)
        {
            if(aray[i]==fnum)
            {
                pos[count]=i+1;
                count++;
            }
        }

        printf("Position : ");
        if(count==0)
            printf("Could not find!!!");
        else
        {
            for(int j=0; j<count; j++)
            {
                printf("(%d) ",pos[j]);
            }
        }
        printf("\n\n");
    }
    return 0;
}
