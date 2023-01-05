#include<stdio.h>
int max, min;
int arr[150];
void maxmin(int x, int y)
{
     int ma, mi, mid;
     if(x==y)
     {
        max = min = arr[x];
     }
     else
     {
        if(x == y-1)
        {
            if(arr[x] <arr[y])
            {
                max = arr[y];
                min = arr[x];
            }
            else
            {
                max = arr[x];
                min = arr[y];
            }
        }
        else
        {
            mid = (x+y)/2;
            maxmin(x, mid);
            ma = max; mi = min;
            maxmin(mid+1, y);
            if(max <ma)
                max = ma;
            if(min > mi)
                min = mi;
        }
    }
}
int main ()
{
     int i, num;
     printf ("Enter the  number of the numbers : ");
     scanf ("%d",&num);
     printf ("Enter the numbers : \n");
     for (i=1;i<=num;i++)
      scanf ("%d",&arr[i]);

     max = arr[0];
     min = arr[0];
     maxmin(1, num);
     printf ("Minimum  : %d\n", min);
     printf ("Maximum  : %d\n", max);

     return 0;
}

