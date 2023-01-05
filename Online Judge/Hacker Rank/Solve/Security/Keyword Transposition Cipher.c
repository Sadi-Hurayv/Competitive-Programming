#include<stdio.h>
#include<string.h>
int main()
{
    int t, f;
    scanf("%d",&t);
    char key[8], cphr[256], orgi[256]={'\0'};
    for(int l=0; l<t; l++)
    {
        getchar();
        scanf("%[^\n]s",&key);
        ///minimize duplicate
        for(int i = 0; i < strlen(key); i++)
        {
            for(int j = i + 1; key[j] != '\0'; j++)
            {
                if(key[j] == key[i])
                {
                    for(int k = j; key[k] != '\0'; k++)
                    {
                        key[k] = key[k + 1];
                    }
                    j--;
                }
            }
        }
//        printf("%s\n",key);

        ///calculate row and col
        int col, row;
        col=strlen(key);

        if(26%col==0)
            row=26/col;
        else
            row=(26/col)+1;

///     create s_table
        char stbl[row][col];
///        stbl[][]={'\0'};
        int m=65;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i==0)
                {
                    stbl[i][j]=key[j];
                }
                else
                {
                    f=1;
                    if(m<=90)
                    {
                        for(int k=0; k<strlen(key); k++)
                        {
                            if(k==0)
                                f=0;
                            if(m>90)
                            {
                                f=1;
                                break;
                            }
                            if(key[k]==m)
                            {
                                f=1;
                                m++;
                                k=-1;
                            }
                        }
                        if(f==0)
                        {
                            stbl[i][j]=m;
                            m++;
                        }
                    }
                    if(m>90 && f!=0)
                    {
                        stbl[i][j]='\0';
                    }
                }
            }
        }

//        printf("%s\n",stbl);
//        for(int i=0; i<row; i++)
//        {
//            for(int j=0; j<col; j++)
//            {
//                printf("%c",stbl[i][j]);
//            }
//            printf("\n");
//        }

///     sort the key
        char temp;
        for(int i=0; i<strlen(key)-1; i++)
        {
            for(int j=0; j<strlen(key)-i-1; j++)
            {
                if(key[j]>key[j+1])
                {
                    temp=key[j];
                    key[j]=key[j+1];
                    key[j+1]=temp;
                }
            }
        }

///     substituted alphabet
        char salph[27];
        int n=0;
        for(int i=0; i<strlen(key); i++)
        {
            for(int j=0; j<strlen(key); j++)
            {
                if(key[i]==stbl[0][j])
                {
                    for(int k=0; k<row; k++)
                    {
                        if(stbl[k][j]!='\0')
                        {
                            salph[n]=stbl[k][j];
                            n++;
                        }
                    }
                    break;
                }
            }
        }
        salph[26]='\0';
        //printf("%s\n",salph);

///     getting cipher
        getchar();
        scanf("%[^\n]s",&cphr);

///     getting orginal
        for(int i=0; i<strlen(cphr); i++)
        {
            if(cphr[i]==' ')
                orgi[i]=' ';
            else
            {
                for(int j=0; j<26; j++)
                {
                    if(cphr[i]==salph[j])
                    {
                        orgi[i]=j+65;
                        break;
                    }
                }
            }
        }
        orgi[strlen(cphr)]='\0';
        printf("%s\n",orgi);

    }
    return 0;
}
