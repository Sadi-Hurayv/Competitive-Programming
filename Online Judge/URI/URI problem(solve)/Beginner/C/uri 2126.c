#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, k=0, l, outr, pos, c=0;
    char subs[100], mains[100];
    while(scanf("%s %s",&subs,&mains)!=EOF)
    {
        k++;
        outr=0;
        for(i=0; i<strlen(mains); i++)
        {

            if(mains[i]==subs[0])
            {
                c=1;
                for(l=i+1, j=1; j<strlen(subs); l++, j++)
                {
                    if(mains[l]==subs[j])
                    {
                        c++;
                    }
                }
                if(c==strlen(subs))
                {
                    outr++;
                    pos=i+1;
                }

            }
        }

//        for(i=0; i<strlen(mains); i++)
//        {
//            if(mains[i]==subs[j])
//            {
//                j++;
//                if(j==strlen(subs))
//                {
//                    j=0;
//                    outr++;
//                    pos=i-strlen(subs)+2;
//                    i=pos;
//                }
//                else
//                    i++;
//            }
//            else
//            {
//                j=0;
//                i++;
//            }
//        }
        printf("Caso #%d:\n",k);
        if(outr==0)
            printf("Nao existe subsequencia\n\n");
        else
        {
            printf("Qtd.Subsequencias: %d\n",outr);
            printf("Pos: %d\n\n",pos);
        }
    }
    return 0;
}
