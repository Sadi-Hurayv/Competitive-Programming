#include<stdio.h>
int main()
{
    int i, j, t, s;
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
    for(i=11, t=1, s=11; i>6; i--, t++, s--)
    {
        for(j=t; j<s; j++)
        {
            sum+=m[j][i];
        }
    }

    if(ch=='S')
    {
        printf("%.1f\n",sum);
    }
    else if(ch=='M')
    {
        ave=(sum/30);
        printf("%.1f\n",ave);
    }
    return 0;
}
