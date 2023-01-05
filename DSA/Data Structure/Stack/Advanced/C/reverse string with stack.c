#include<stdio.h>
#define MAX_SIZE 100
int TOP=-1;
int stri[MAX_SIZE];
void push(char item)
{
    stri[++TOP]=item;
}

void pop()
{
    TOP--;
}

char top()
{
    return stri[TOP];
}

int main()
{
    char ch;
    printf("Enter the STRING: ");
    for(int i=0; i<MAX_SIZE; i++)
    {
        scanf("%c",&ch);

        //ch=getchar();
        if(ch=='\n')
            break;
        push(ch);
    }
    printf("After reverse the STRING is : ");
    for(int i=0; TOP>-1; i++)
    {
        printf("%c",top());
        pop();
    }
    printf("\n");
}
