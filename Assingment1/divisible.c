#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    if ( a % 5 == 0 && a % 11 == 0){
        printf("%d is divisible", a);
    }
    else{
        printf("%d is not divisible", a);
    }
    return 0;
}