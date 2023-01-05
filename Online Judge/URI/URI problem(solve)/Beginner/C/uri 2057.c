#include<stdio.h>
int main()
{
    int de, tr, tz, lt;
    scanf("%d %d %d",&de,&tr,&tz);
    lt=de+tr+tz;
    if(lt>=24)
        lt=lt-24;
    else if(lt<0)
        lt=24+lt;
    printf("%d\n",lt);
    return 0;
}
