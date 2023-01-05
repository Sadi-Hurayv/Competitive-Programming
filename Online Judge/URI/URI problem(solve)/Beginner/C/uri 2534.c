#include<stdio.h>
int main()
{
    int nump, numq, i, j, onum[110], swa, q;
    while(scanf("%d %d",&nump,&numq)!=EOF)
    {
        for(i=0; i<nump; i++)
        {
            scanf("%d",&onum[i]);
        }
        for(i=0; i<nump-1; i++)
        {
            for(j=0; j<nump-1-i; j++)
            {
                if(onum[j]<onum[j+1])
                {
                    swa=onum[j];
                    onum[j]=onum[j+1];
                    onum[j+1]=swa;
                }
            }
        }
        for(i=0; i<numq; i++)
        {
            scanf("%d",&q);
            printf("%d\n",onum[q-1]);
        }
    }
    printf("hdjj");
    return 0;
}
