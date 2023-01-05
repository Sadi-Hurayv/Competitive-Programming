#include<stdio.h>
int main()
{
    int s1=6, c1=9, i, j, k, l;
    for(i=1; i<=9; i++)
    {
        if(i<=5)
        {
            s1++;
            c1--;
            for(j=1; j<=s1; j++)
            {
                if(j==c1)
                    printf("%c",s1+58);
                else
                    printf(" ");
            }
            printf("%c\n",s1+58);
        }
        else
        {
            s1--;
            c1++;
            for(j=1; j<=s1; j++)
            {
                if(j==c1)
                    printf("%c",s1+58);
                else
                    printf(" ");
            }
            printf("%c\n",s1+58);
        }
    }
    return 0;
}
