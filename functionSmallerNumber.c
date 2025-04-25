#include<stdio.h>

int minimum(int a,int b){

   int temp;

   if(a<b){
    temp = a;
   }
   else{
    temp = b;
   }
    return temp;
}

int main()
{
    int a , b;
    int smaller = 0;


    scanf("%d%d",&a,&b);

    smaller = minimum(a,b);


    printf("The smaller number is : %d\n",smaller);
}
