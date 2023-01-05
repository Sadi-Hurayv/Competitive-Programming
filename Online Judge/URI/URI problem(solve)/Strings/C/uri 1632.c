#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, j;
    long long int re;
    char s[1000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        getchar();
        scanf("%[^\n]",&s);
        re=1;
        for(j=0; j<strlen(s); j++)
        {
            if(s[j]=='A' || s[j]=='a' || s[j]=='E' || s[j]=='e' || s[j]=='I' || s[j]=='i' || s[j]=='O' || s[j]=='o' || s[j]=='S' || s[j]=='s')
                re=re*3;
            else
                re=re*2;
        }
        printf("%lld\n",re);
    }

    return 0;
}
