#include<stdio.h>
int main()
{
    int i, re, T, N, K;
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%d %d",&N,&K);
        re=(N/K)+(N%K);
        printf("%d\n",re);
    }
    return 0;
}
