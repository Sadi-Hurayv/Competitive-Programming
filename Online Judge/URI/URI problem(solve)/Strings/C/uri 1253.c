#include<stdio.h>
int main()
{
    int T, key;
    scanf("%d",&T);
    char ch[52];

    for(int i=0; i<T; i++)
    {
        //fflush(stdin);
        getchar();
        scanf("%[^\n]s",&ch);
        scanf("%d",&key);
        //printf("%s",ch);
        int j=0;
        while(ch[j]!='\0')
        {
            if(ch[j]-key<65)
                printf("%c",ch[j]-key+26);
            else
                printf("%c",ch[j]-key);
            j++;
        }
        printf("\n");
        ch[0]='\0';
    }
    return 0;
}
