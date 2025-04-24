#include<stdio.h>

int main(){


   int marks;
   char grade;

   scanf("%d",&marks);


   if(marks>=80){
    grade='A+';
    printf("Your grade is %c",grade);
   }

   else if(marks>=70){
    grade='A';
    printf("Your grade is %c",grade);
   }

    else if(marks>=60){
    grade='B';
    printf("Your grade is %c",grade);
   }
  else
    printf("You just failed");

   return 0;
}
