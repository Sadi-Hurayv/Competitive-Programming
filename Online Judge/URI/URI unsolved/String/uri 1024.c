#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char line[1001], temp, ch1[1001];
    int n, i, j, k;
    scanf("%d",&n);
    for(k=0; k<n; k++)
    {


        fflush(stdin);
        scanf("%[^\n]",&line);

        for(i=0; i<strlen(line); i++)
        {
            if(isalpha(line[i]))
            {
                line[i]=line[i]+3;
            }
        }
        for ( i = 0, j = strlen(line)-1; i<strlen(line);i++,j--) {
            ch1[j] = line[i];
        }
        ch1[strlen(line)] = '\0';
        for(i=(strlen(ch1))/2; i<strlen(ch1); i++)
        {
            ch1[i]=ch1[i]-1;
        }
        printf("%s\n",ch1);
//        for(i=0, j=strlen(line)-1; i<j; i++, j--)
//        {
//            temp=line[j];
//            line[j]=line[i];
//            line[i]=temp;
//
//        }
///     strrev(line);
//        for(i=(strlen(line))/2; i<strlen(line); i++)
//        {
//            line[i]=line[i]-1;
//        }

    }
    return 0;
}
