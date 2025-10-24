#include<stdio.h>
int main(){
    float a;
    printf("Enter the number :");
    scanf("%f", &a);
    if (a>0){
        printf("the number is positive");
    }
    else if(a<0){
        printf("the number is negative");
    }
    else{
        printf("the number is zero");
    }
    return 0;
}