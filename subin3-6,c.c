#include<stdio.h>

int main()
{
    int n , sum ;

    sum = 0;

    for(n=5;n<=20;n=n+5){

      sum = sum + n;
    }

    printf("Sum is %d",sum);

    return 0;
}
