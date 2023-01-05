#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l,n,p;
    char line[1002],line1[1002];
    scanf("%d",&n);
    getchar();
    for(i = 0;i < n;i++){
        gets(line);
        l = strlen(line);
        for(j=0;j<l;j++){
            if((line[j]>='A' && line[j]<='Z') || (line[j]>='a' && line[j]<='z'))line[j] += 3;
        }
        p=l-1;
        for(j=0;j<l;j++){
            line1[j]=line[p];
            p--;
        }
        line1[j]='\0';
        for(j = l/2;j < l;j++)
            line1[j] -= 1;
        printf("%s\n",line1);
    }
    return 0;
}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char line[1001], temp;
//    int n, i, j, k, tr;
//    scanf("%d",&n);
//    for(k=0; k<n; k++)
//    {
//
//
//        fflush(stdin);
//        scanf("%[^\n]",&line);
//
//        tr=strlen(line);
//        if(tr%2==1)
//            tr++;
//        for(int i=0; i<tr/2; i++)
//        {
//            if(line[i]>=' '&&line[i]<='@')
//                line[i]-=1;
//            else
//            {
//                line[i]+=3;
//                line[i]-=1;
//            }
//        }
//        for(int j=strlen(line)-1; j>=tr/2; j--)
//        {
//            if(!(line[j]>=' '&&line[j]<='@'))
//                line[j]+=3;
//        }
//       for(i=0, j=strlen(line)-1; i<j; i++, j--)
//        {
//            temp=line[j];
//            line[j]=line[i];
//            line[i]=temp;
//
//        }
//        printf("%s\n",line);
//    }
//    return 0;
//}



//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//int main()
//{
//    char line[1001], temp, ch1[1001];
//    int n, i, j, k;
//    scanf("%d",&n);
//    for(k=0; k<n; k++)
//    {
//
//
//        fflush(stdin);
//        scanf("%[^\n]",&line);
//
//        for(i=0; i<strlen(line); i++)
//        {
//            if(isalpha(line[i]))
//            {
//                line[i]=line[i]+3;
//            }
//        }
//        for ( i = 0, j = strlen(line)-1; i<strlen(line);i++,j--) {
//            ch1[j] = line[i];
//        }
//        ch1[strlen(line)] = '\0';
//        for(i=(strlen(ch1))/2; i<strlen(ch1); i++)
//        {
//            ch1[i]=ch1[i]-1;
//        }
//        printf("%s\n",ch1);
////        for(i=0, j=strlen(line)-1; i<j; i++, j--)
////        {
////            temp=line[j];
////            line[j]=line[i];
////            line[i]=temp;
////
////        }
/////     strrev(line);
////        for(i=(strlen(line))/2; i<strlen(line); i++)
////        {
////            line[i]=line[i]-1;
////        }
//
//    }
//    return 0;
//}
