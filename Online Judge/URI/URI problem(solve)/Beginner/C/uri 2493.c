#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int t, i, j, k ,n, r, w;
    char tnam[55], ope;
    while(scanf("%d",&t)!=EOF)
    {
        r=0;
        w=0;
        int x[t], y[t], z[t];
        char nam[t][55];
        for(i=0; i<t; i++)
        {
            scanf("%d %d=%d",&x[i],&y[i],&z[i]);
        }
        for(i=0; i<t; i++)
        {
            scanf("%s %d %c",&tnam,&n,&ope);
            fflush(stdin);
            if(ope=='+')
            {
                if(x[n-1]+y[n-1]==z[n-1])
                    r++;
                else
                {
                    strcpy(nam[w],tnam);
                    w++;
                }

            }
            else if(ope=='-')
            {
                if(x[n-1]-y[n-1]==z[n-1])
                    r++;
                else
                {
                    strcpy(nam[w],tnam);
                    w++;
                }
            }
            else if(ope=='*')
            {
                if(x[n-1]*y[n-1]==z[n-1])
                    r++;
                else
                {
                    strcpy(nam[w],tnam);
                    w++;
                }
            }
            else if(ope=='I')
            {
                if((x[n-1]+y[n-1]==z[n-1]) || (x[n-1]-y[n-1]==z[n-1]) || (x[n-1]*y[n-1]==z[n-1]))
                {
                    strcpy(nam[w],tnam);
                    w++;
                }
                else
                    r++;
            }
        }
        if(r==t)
            printf("You Shall All Pass!\n");
        else if(w==t)
            printf("None Shall Pass!\n");
        else
        {
            int flag2=0, flag1[50][55]={0}, swa[55];
            char swap[55];
//            for(i=0; i<w; i++)
//            {
//                for(j=0; j<strlen(nam[i]); j++)
//                {
//                    if(isupper(nam[i][j]))
//                    {
//                        nam[i][j]=nam[i][j]+32;
//                        flag1[i][j]=1;
//                    }
//
//                }
//            }

            for(i=0; i<w-1; i++)
            {
                flag2=0;
                for(j=0; j<w-1-i; j++)
                {
                    if(strcmp(nam[j],nam[j+1])>0)
                    {
                        for(k=0; k<=strlen(nam[j]); k++)///Here the reason of (<=) is null character ('\0').
                        {
                            swap[k]=nam[j][k];
//                            swa[k]=flag1[j][k];
                        }


                        for(k=0; k<=strlen(nam[j+1]); k++)///Here the reason of (<=) is null character ('\0').
                        {
                            nam[j][k]=nam[j+1][k];
//                            flag1[j][k]=flag1[j+1][k];
                        }


                        for(k=0; k<=strlen(swap); k++)///Here the reason of (<=) is null character ('\0').
                        {
                             nam[j+1][k]=swap[k];
//                             flag1[j+1][k]=swa[k];
                        }

                        flag2=1;
                    }
                }
                if(flag2==0)
                    break;
            }

//            for(i=0; i<w; i++)
//            {
//                for(j=0; j<strlen(nam[i]); j++)
//                {
//                    if(flag1[i][j]==1)
//                        nam[i][j]=nam[i][j]-32;
//                }
//            }
            for(i=0; i<w; i++)
            {
                if(i==(w-1))
                    printf("%s",nam[i]);
                else
                    printf("%s ",nam[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
