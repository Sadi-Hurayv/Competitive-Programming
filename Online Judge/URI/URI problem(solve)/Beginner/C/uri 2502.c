#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int nl, nci, i, j, k;
    while(scanf("%d %d",&nci,&nl)!=EOF)
    {
        char ch[100];
        char ch1[nci+1], ch2[nci+1];
        fflush(stdin);
        scanf("%s",&ch1);
        fflush(stdin);
        scanf("%s",&ch2);

        for(i=0; i<nl; i++)
        {
            fflush(stdin);
            scanf("%s",&ch);

            for(j=0; j<strlen(ch); j++)
            {
                for(k=0; k<nci; k++)
                {
                    if(islower(ch[j]))
                    {
                        if(isupper(ch1[k]))
                        {
                            if(ch[j]==ch1[k]+32)
                            {
                                if(isupper(ch2[k]))
                                {
                                    ch[j]=ch2[k]+32;///
                                }
                                else
                                {
                                    ch[j]=ch2[k];
                                }
                                break;
                            }
                        }
                        if(isupper(ch2[k]))
                        {
                            if(ch[j]==ch2[k]+32)
                            {
                                if(isupper(ch1[k]))
                                {
                                    ch[j]=ch1[k]+32;
                                }
                                else
                                {
                                    ch[j]=ch1[k];
                                }
                                break;
                            }
                        }
                    }
                    else
                    {
                        if(ch[j]==ch1[k])
                        {
                           if(isupper(ch2[k]))
                            {
                                if(isalpha(ch1[k]))///
                                    ch[j]=ch2[k];
                                else
                                    ch[j]=ch2[k]+32;
                            }
                            else
                            {
                                ch[j]=ch2[k];
                            }
                            break;
                        }
                        else if(ch[j]==ch2[k])
                        {
                            if(isupper(ch1[k]))
                            {
                                if(isalpha(ch2[k]))///
                                {
                                    ch[j]=ch1[k];
                                }

                                else
                                    ch[j]=ch1[k]+32;
                            }
                            else
                            {
                                ch[j]=ch1[k];
                            }
                            break;
                        }
                    }

                }
            }
            printf("%s\n",ch);
        }
        printf("\n");
    }
    return 0;
}
