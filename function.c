#include<stdio.h>

int main()
{
    int a , b;
    int smaller = 0;


    scanf("%d%d",&a,&b);

    if(a<b){
        smaller = a;
    }
    else{
        smaller = b;
    }

    printf("The smaller number is : %d");

    return 0;
}
