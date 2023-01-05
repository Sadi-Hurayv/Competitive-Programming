#include<stdio.h>
#include<string.h>
#include<math.h>
int fibo(int n);

int fi[1510];
int main()
{
    char ch[10001];
    int t, i, j, k;
    int sum;
    fi[0]=0;
    fi[1]=1;
    fi[2]=1;
    for(k=3; k<1505; k++)
    {
        fi[k]=(fi[k-1]+fi[k-2])%1000;
    }
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%s",&ch);
        sum=0;
        for(j=0; j<strlen(ch); j++)
        {
            sum=sum*2;
            sum=sum+(ch[j]-'0');
            sum=sum%1500;
        }
        printf("%03d\n",fibo(sum));

        fflush(stdin);
    }
    return 0;
}


int fibo(int n)
{
    return fi[n];
}

