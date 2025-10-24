#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter the year :");
    scanf("%d", &a);
   if (a % 4 == 0 && a % 100 == 0 && a % 400 == 0){
    printf("this year is leap year");
   }
   else if(a % 4 == 0 && a % 100 == 0 && a % 400 != 0){
    printf("this is not a leap year");
   }
   else if(a % 4 == 0){
    printf("leap year");
   }
   else{
    printf("not a leap year");
   }
   return 0;

}