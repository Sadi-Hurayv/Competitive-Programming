#include<stdio.h>
#include<math.h>
int main()
{
    int t, n, m, i, re;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d%d",&n,&m);
        re=(m*log10(n))+1;
        printf("%d\n",re);
    }
    return 0;
}

///Alternative code
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    int n,m, L, i;
//    scanf("%d",&L);
//    for(i=0; i<L; i++)
//    {
//        scanf("%d%d",&n,&m);
//        double d;
//        d=pow(n,m);
//        char str[100]={'\0'};
//        sprintf(str,"%0.0e\n",d);
//        //printf(str);
//        char ch;
//        int temp;
//        int digit;
//        sscanf(str,"%d%c%c%d",&temp,&ch,&ch,&digit);
//        printf("%d\n",digit+1);
//    }
//
//    return 0;
//}

///Alternative code

//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//int main()
//{
//    int l, n, m, i, j=0, f=0, k=0, N;
//    double re;
//    char ch[7], fch[4];
//    scanf("%d",&l);
//    for(i=0; i<l; i++)
//    {
//        ch[0]='\0';
//        fch[0]='\0';
//        scanf("%d %d",&n,&m);
//        re=pow(n,m);
//        sprintf(ch,"%.0e",re);
//        j=0, f=0, k=0;
//        while(ch[j+1]!='\0')
//        {
//            if(ch[j]=='+')
//            {
//                f=1;
//            }
//            if(f==1)
//            {
//                fch[k]=ch[j+1];
//                k++;
//            }
//            j++;
//        }
//        fch[k]='\0';
//        N= atoi(fch);
//        printf("%d\n",N+1);
//    }
//    return 0;
//}


///Alternative code
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    int L, n, m, i, len;
//    double re;
//    char ch[202];
//    scanf("%d",&L);
//    for(i=0; i<L; i++)
//    {
//        scanf("%d %d",&n,&m);
//        re=pow(n,m);
//        //printf("%lf",re);
//        re=pow(n,m);
//        sprintf(ch,"%.0lf",re);
//        if(n==100 && m==100)
//        {
//            printf("%d\n",1+strlen(ch));
//        }
//        else
//        {
//            printf("%d\n",strlen(ch));
//        }
//    }
//    return 0;
//}


