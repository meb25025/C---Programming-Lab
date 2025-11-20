#include<stdio.h>
int main(){
    float a, b, result;
    char ch;
    printf("Enter the 1st number :");
    scanf("%f", &a);
    printf("Enter the 2nd number :");
    scanf("%f", &b);
    printf("Enter the operator :");
    scanf(" %c", &ch);
    switch(ch){
        case '+':
           result = a+b;
           printf("%.2f", result);
           break;
        case '-':
           result = a-b;
           printf("%.2f", result);
           break;
        case '*':
           result = a*b;
           printf("%.2f", result);
           break;
        case '/':
           result = a/b;
           printf("%.2f", result);
           break;
        default:
           printf("invalid input");
        
        
        }
    return 0;    
}