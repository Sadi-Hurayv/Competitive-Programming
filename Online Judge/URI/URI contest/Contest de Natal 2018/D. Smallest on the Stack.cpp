//#include<iostream>
#include<stack>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    int l, i, n, minv;
    char ch[5];
    std::stack<int> S;
    scanf("%d",&l);
    for(i=0; i<l; i++)
    {
        fflush(stdin);
        scanf("%s",&ch);
        if(strcmp(ch,"PUSH")==0)
        {
            scanf("%d",&n);
            S.push(n);
        }
        else if(strcmp(ch,"POP")==0)
        {
            if(S.empty())
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
            if(S.empty())
            {
                printf("EMPTY\n");
            }
            else
            {
                std::stack<int> T = S;
                minv=T.top();
                for( ; !T.empty(); T.pop())
                {
                    if(T.top()<minv)
                    {
                        minv=T.top();
                    }
                }
                printf("%d\n",minv);
            }
        }
    }
    return 0;
}
