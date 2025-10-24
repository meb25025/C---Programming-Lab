#include<stdio.h>
int main(){

    float a, b, c;

    printf("Enter the first number :");
    scanf("%f", &a);
    printf("Enter the second number :");
    scanf("%f", &b);
    printf("Enter the third number :");
    scanf("%f", &c);
    if(a>b && b>=c){
        printf("first is the largest number");
    } 
    else if(b>c && c>=a){
        printf("second one is the largest number");
    }
    else if(c>a && a>=b){
        printf("third one is the largest number");
    }
    else if(a == b && b>c){
        printf("first two are larger");
    }
    else if(b == c && c>a){
        printf("2nd and third are larger");
    }
    else if(c == a && a>b){
        printf("1st and 3rd are larger");
    }
    else{
        printf("all numbers are equal");
    }
       

    return 0;
}
