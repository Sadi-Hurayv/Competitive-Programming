//#include<stdio.h>
//int main()
//{
    /*float t;
    int n100;
    scanf("%f",&t);
    n100=t/100;
    t=t%100;
    printf("%d\n",n100);
    printf("%f",t);*/
    //double i=2.0299999;
    //printf("%lf",i);
    //int a,b,c;
    //scanf("%d%d%d",&a,&b,&c);
    //if(a==b&&b==c) printf("Yes");
    //else printf("No");
    /*double A,B,C,arr[3];
    double i,j;
    int count, temp;

    /*for(i=0;i<3;i++)
    {
        scanf("%lf",&arr[i]);
    }*/

     /*for(i=0, count=0;i<=2;i=i+0.20)
    {
        if(count==0)
        {
            temp=i;
            i=temp;
            printf("%f\n",i);
        }
        count++;
        if(count==5)
            count=0;
    }*/

    /*double i=4.6745;
    int j;
    j=i;
    printf("%d  ",j);
    i=j;
    printf("%lf",i);*/

    /*int i, j;
    for(i=0; ; i++)
    {
        scanf("%d",&j);
        if(j<=0)
            break;
        printf("a\n");
    }*/
    /*int i, j, k;
    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&k);
    printf("%d %d %d",i,j,k);*/
    /*char r[5];
    r={"asd"};
    printf("%s",r);*/
    /*int a;
    a=1%16;
    printf("%d",a);
    return 0;*/

//}

//#include <stdlib.h>
//#include <string.h>
#include <stdio.h>
#define PI 3.14
#include<math.h>

//int main()
//{
////    double v, r, h, d, a;
////    int tmp;
////    while(scanf("%lf%lf", &v, &d)!=EOF)
////    {
////        r = d/2;
////        a = PI*r*r;
////        h = v/a;
////        printf("ALTURA = %.2lf\n",h);
////        printf("AREA = %.2lf\n",a);
////    }
//
////    int i=10, j=20;
//    printf("%d %d",'A','a');
//    return 0;
//}
//
//int main(){
//    int a=2,b=5;
//    swap(a,b,int);
//    printf("%d,%d",a,b);
//    return 0;
//}
//struct Points {
//  int min;
//  int max;
//};
//
//int main()
//{
////  returnNumbersArray("numbers.txt");
//// Display output
//  printf("Sr.\t\tNumber\t\tPrime\t\tOdd/Even\t\tMin/Max\n");
//
//  for (int i = 0; i < LENGTH; i++) {
//    printf("%d\t\t%d\t\t\t%s\t\t\t%s\n", i + 1,
//      numbers[i],
//      (isPrime(numbers[i]) ? "Yes":"No"),
//      (isOddOrEven(numbers[i]) ? "Odd":"Even"));
//  }
//
//
//  // Define Min and Max values
//  getMinMax(numbers);
//  printf("%d, %d", point.max, point.min);
//
//  return 0;
//}
//
//// Return min and max value from the array.
//Point getMinMax(int array[]) {
//  point.max = point.min = array[0];
//  for (int i = 1; i < LENGTH; i++) {
//    if (array[i] > point.max) {
//      point.max = array[i];
//    }
//    if (array[i] < point.min) {
//      point.min = array[i];
//    }
//  }
//  return point;
//}
#include<stdio.h>
#include<math.h>
int main()
{
//    int n=95;
//    double num=20, re, s;
//    re=pow(n,n);
//    printf("%e",re);
//    s=re%7;
//    printf("\n%lld",s);
    int a, i=0, q;
    double b;
    char ch1, ch[40];
    scanf("%d %lf %c",&a,&b,&q);
    scanf("%[^\n]s",&ch);

//    fflush(stdin);
//    char ch1, ch[40];
//    scanf("%c",&ch1);
//    printf("%c\n",ch1);
//    fflush(stdin);
//    scanf("%[^\n]s",&ch);
    printf("%d \n",a);
    printf("%lf\n",b);
    //fflush(stdout);
    printf("%c\n",q);
    printf("%s\n",ch);
    printf("%d%lf%c%s\n",a,b,q,ch);
}
