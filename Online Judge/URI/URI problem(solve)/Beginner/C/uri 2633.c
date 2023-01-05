#include<stdio.h>
typedef struct BARBQ{
    char meat[25];
    int date;
}BARBQ;
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        BARBQ barbq[t], temp;
//        char meat[t][25];
//        int date[t];
        for(int i=0; i<t; i++)
        {
            scanf("%s%d",&barbq[i].meat,&barbq[i].date);
        }
        for(int i=0; i<t-1; i++)
        {
            for(int j=0; j<t-1-i; j++)
            {
                if(barbq[j].date>barbq[j+1].date)
                {
                    temp=barbq[j];
                    barbq[j]=barbq[j+1];
                    barbq[j+1]=temp;
                }
//                for(int k=0; k<t; k++)
//                {
//                    printf("%d ",barbq[k].date);
//                }
//                 printf("\n");
            }
        }
        for(int i=0; i<t; i++)
        {
            if(i==t-1)
            {
                printf("%s",barbq[i].meat);
            }
            else
            {
                printf("%s ",barbq[i].meat);
            }
        }
        printf("\n");

    }
}
