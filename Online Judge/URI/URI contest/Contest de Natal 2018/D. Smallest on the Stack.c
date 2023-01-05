#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
stack<int> S;
int main()
{
    int l, i, n;
    char ch[5];
    scanf("%d",&l)
    for(i=0; i<l; i++)
    {
        scanf("%s",ch);
        if(strcmp(ch,"PUSH")==0)
        {
            scanf("%d",&n);
            S.push(n);
        }
        else if(strcmp(ch,"POP")==0)
        {
            if(S.empty()==true)
            {
                printf("EMPTY\n");
            }
            else
            {
                 S.pop();
            }
        }
        else if(strcmp(ch,"MIN")==0)
        {
            printf("a")
        }
    }
    printf("%d",S[0]);
}
