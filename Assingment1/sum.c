#include<stdio.h>
#include<math.h>
int main(){
    float a, sum;
    printf("Enter the number : ");
    scanf("%f", &a);
    sum = (a*(a + 1))/2;
    printf("the sum of first %f natural number is %f", a, sum);

    return 0;

}