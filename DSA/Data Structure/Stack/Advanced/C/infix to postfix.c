#include<stdio.h>
#include<ctype.h>

char stack[20];
int top=-1;

void push(char item)
{
    stack[++top]=item;
}

char TOP()
{
    return stack[top];
}

char pop()
{
    if(top==-1)
        return -1;
    else
        return stack[top--];
}

int priority(char ope)
{
    if(ope=='(')
        return 0;
    else if(ope=='+' || ope=='-')
        return 1;
    else if(ope=='*' || ope=='/')
        return 2;
    else if(ope=='^')
        return 3;
}

int main()
{
    char expretion[20], e;
    char *exp;
    scanf("%[^\n]",&expretion,printf("Enter the infix expression : "));
    exp=expretion;

    printf("The postfix expression : ");
    while(*exp!='\0')
    {
        if(isalnum(*exp))
            printf("%c",*exp);
        else if(*exp=='(')
           push(*exp);
        else if(*exp==')')
           while((e=pop())!='(')
                printf("%c",e);
        else
        {
            while(priority(*exp)<=priority(TOP()))
                printf("%c",pop());
            push(*exp);
        }
        exp++;
    }
    while(top!=-1)
        printf("%c",pop());
    printf("\n");
    return 0;
}
