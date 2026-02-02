#include<stdio.h>
int main(){
   int x, i, n, sum, avg;

   printf("enter the value of n :");
   scanf("%d", &n);
   i = 1;
   sum = 0;
   while(i <= n){
   printf("enter a number : ");
   scanf("%d", &x);
   sum = sum + x;
   avg = sum/n;
   i = i + 1;
   }
   printf("sum of the input number is %d", sum);
   printf("average is %d\n", avg);
   return 0;
}