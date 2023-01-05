#include<stdio.h>
int main()
{
    int i, j, t;
    float m[12][12], sum=0, ave;
    char ch;
    scanf("%d %c",&t,&ch);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f",&m[i][j]);
        }
    }
    for(i=t, j=0; j<12; j++)
            sum+=m[j][i];
    if(ch=='S')
    {
        printf("%.1f\n",sum);
    }
    else if(ch=='M')
    {
        ave=(sum/12);
        printf("%.1f\n",ave);
    }
    return 0;
}


