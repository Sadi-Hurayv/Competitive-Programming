#include<stdio.h>
int main()
{
    long int t, nums, opt, i, j, op, s1, s2, k, ci, cu, l, m;
    scanf("%ld",&t);
    for(l=0; l<t; l++)
    {
        scanf("%ld",&nums);
        int aray[nums][60], nume[nums], ele, cele, c;
        for(i=0; i<nums; i++)
        {
            cele=0;
            scanf("%d",&nume[i]);
            for(j=0; j<nume[i]; j++)
            {
                scanf("%d",&ele);
                if(j==0)
                {
                    aray[i][j]=ele;
                    cele++;
                }

                else if(j>0)
                {
                    c=0;
                    for(m=0; m<cele; m++)
                    {
                        if(ele!=aray[i][m])
                        {
                            c++;
                        }
                    }
                    if(cele==c)
                    {
                        aray[i][cele]=ele;
                        cele++;
                    }
                }
            }
            nume[i]=cele;
        }


        scanf("%ld",&opt);
        for(k=0; k<opt; k++)
        {
            ci=0;
            cu=0;
            scanf("%ld %ld %ld",&op,&s1,&s2);
            if(op==1)
            {
                for(i=0; i<nume[s1-1]; i++)
                {
                    for(j=0; j<nume[s2-1]; j++)
                    {
                        if(aray[s1-1][i] == aray[s2-1][j])
                            ci++;
                    }
                }
                printf("%ld\n",ci);
            }
            else if(op==2)
            {
                for(i=0; i<nume[s1-1]; i++)
                {
                    for(j=0; j<nume[s2-1]; j++)
                    {
                        if(aray[s1-1][i] == aray[s2-1][j])
                            ci++;
                    }
                }
                cu=nume[s1-1]+nume[s2-1]-ci;
                printf("%ld\n",cu);
            }
        }
    }
    return 0;
}
