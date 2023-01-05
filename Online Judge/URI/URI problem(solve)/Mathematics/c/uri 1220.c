#include <stdio.h>
int main(){
    int n;
    int N[1000];
    int whole, real;
    //double valorMaior, valorMenor;
    double total, average, L_exchanged, H_exchanged;

    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        total = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d.%d", &whole, &real);
            N[i] = whole *100 + real;
            total += N[i];
        }

        average = ((double) total) / n;
        L_exchanged = 0;
        H_exchanged=0;

        for(int l = 0; l < n; l++)
        {
            if(N[l]<average)
            {
                L_exchanged+=((int)(average-N[l]))/100.0;
            }
            else
            {
                H_exchanged += ((int)(N[l]-average))/100.0;
            }
        }
        if(L_exchanged > H_exchanged)
        {
            printf("$%.2f\n",L_exchanged);
        }
        else
        {
            printf("$%.2f\n",H_exchanged);
        }
    }
    return 0;
}
