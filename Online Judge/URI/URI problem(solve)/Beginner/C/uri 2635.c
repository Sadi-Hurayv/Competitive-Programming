#include<stdio.h>
#include<string.h>
typedef struct SEARCH{
    char ele[105];
}SEARCH;
int main()
{
    int N, Q, count, max;
    scanf("%d",&N);
    SEARCH search[N], se;
    for(int i=0; i<N; i++)
    {
        scanf("%s",&search[i].ele);
    }
    scanf("%d",&Q);
    for(int j=0; j<Q; j++)
    {
        max=0;
        count=0;
        scanf("%s",&se.ele);
        for(int i=0; i<N; i++)
        {
           if(strncmp(search[i].ele,se.ele,strlen(se.ele))==0)
            {
                count++;
                if(strlen(search[i].ele)>max)
                {
                    max=strlen(search[i].ele);
                }
            }
        }
        if(count==0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d %d\n",count,max);
        }
        fflush(stdin);
    }

    return 0;
}
