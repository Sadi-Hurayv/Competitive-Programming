#include<stdio.h>
int main()
{
    int i, j, t;
    float m[12][12], sum=0, ave;
    char ch;
    scanf("%c",&ch);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f",&m[i][j]);
        }
    }
    for(i=0, t=10; i<11; i++, t--)
    {
        for(j=t; j>=0; j--)
        {
            sum+=m[i][j];
        }
    }

    if(ch=='S')
    {
        printf("%.1f\n",sum);
    }
    else if(ch=='M')
    {
        ave=(sum/66);
        printf("%.1f\n",ave);
    }
    return 0;
}
