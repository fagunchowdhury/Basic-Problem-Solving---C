#include<stdio.h>

int main()
{
    int n , sum , start , dif , end;

    scanf("%d%d%d",&start,&dif,&end);

    for(n=start ; n<=end ; n = n + dif){

        sum = n + sum;

        printf("Sum is %d\n",sum);
    }
    return 0;
}
