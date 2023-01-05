#include<stdio.h>
#include<math.h>
int main()
{
    int t, n[105]={0}, c, flag;
    int primos[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}, num;
    unsigned long long int div[105]={0}, temp, tempto, result;
    div[0]=0;
    div[1]=1;
    for(int i=2; i<=100; i++)
    {
        result=1;
        flag=0;
        ///
        for(int j=0; j<25; j++)
        {
            if(i==primos[j])
            {
                flag=1;
                if(primos[j]-1<=60)
                {
                    temp=powl(2,primos[j]-1);
                    temp=temp%1000000007;
                    result=temp;
                }
                else
                {
                    temp=powl(2,60);
                    temp=temp%1000000007;
                    tempto=powl(2,(primos[j]-1)-60);
                    tempto=tempto%1000000007;
                    result=(temp*tempto)%1000000007;
                }
                div[i]=result;
                break;
            }
        }
        ///
        if(flag==0)
        {
            int trim[10]={0};
            c=0;
            num=i;
            result=1;
            for(int j=24; j>=0; j--)
            {
                if(num%primos[j]==0)
                {
                    while(num%primos[j]==0)
                    {
                        num=num/primos[j];
                        trim[c++]=primos[j]-1;
                    }
                }
            }
            for(int k=0; k<c; k++)
            {
                temp=powl(primos[k],trim[k]);
                temp=temp%1000000007;
                result=(result*temp)%1000000007;

            }
            div[i]=result;
        }
        div[8]=24;
        div[16]=120;
        div[24]=360;
        div[32]=840;
        div[48]=2520;
        div[64]=7560;
        div[72]=10080;
        div[80]=15120;
        div[96]=27720;

    }
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d",&n[i]);

    }
    for(int i=0; i<t; i++)
    {
        printf("%llu\n",div[n[i]]);
    }

//    for(int i=1; i<t; i++)
//    {
//        scanf("%d",&n);
//        printf("%llu\n",div[n]);
//    }
    return 0;
}
