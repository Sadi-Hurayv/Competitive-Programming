# include<stdio.h>

void knapsack(int n, double weight[], double profit[], double capacity)
{
    double x[100]={0.0}, TotalProfit=0;
    int i, j;

    //   for (i = 0; i < n; i++)
    //      x[i] = 0.0;

    for (i=0; i<n; i++)
    {
        if (weight[i]>capacity)
            break;
        else
        {
            x[i]=1.0;
            TotalProfit=TotalProfit+profit[i];
            capacity=capacity-weight[i];
            printf("\n%lf\t%lf",capacity,TotalProfit);
        }
    }

    if (i<n && capacity!=0)
    {
        x[i]=capacity/weight[i];
        TotalProfit=TotalProfit+(x[i]*profit[i]);
        capacity=capacity-(x[i]*weight[i]);
        printf("\n%lf\t%lf",capacity,TotalProfit);
    }




    printf("\nThe result vector is: \n");
    for (i=0; i<n; i++)
      printf("%lf\t",x[i]);

    printf("\nMaximum profit is: %lf",TotalProfit);

}

int main() {
    double weight[100], profit[100], capacity;
    int N, i, j;
    double ratio[100], temp;
    scanf("%d",&N,printf("Number of the objects: "));

    printf("Enter the weights and profits of each object: \n");
    for (i=0; i<N; i++)
    {
      scanf("%lf%lf",&weight[i],&profit[i]);
    }

    printf("Enter the capacity : ");
    scanf("%lf",&capacity);

    for (i=0; i<N; i++)
    {
      ratio[i]=profit[i]/weight[i];
    }

    for (i=0; i<N; i++)
    {
      for (j=i+1; j<N; j++)
      {
         if (ratio[i]<ratio[j])
         {
            temp=ratio[j];
            ratio[j]=ratio[i];
            ratio[i]=temp;

            temp=weight[j];
            weight[j]=weight[i];
            weight[i]=temp;

            temp=profit[j];
            profit[j]=profit[i];
            profit[i]=temp;
         }
      }
    }

    for(i=0; i<N; i++)
    {
        printf("%lf\t%lf\t%lf\n",weight[i],profit[i],ratio[i]);
    }
    knapsack(N, weight, profit, capacity);
    return 0;
}
