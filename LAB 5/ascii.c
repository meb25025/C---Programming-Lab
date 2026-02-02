#include<stdio.h>
int main(){
    char c;
    int n;
    printf("Enter your character :");
    scanf("%c", &c);
    if(c>=65 && c<=90){
        printf("the character is uppercase");
    }
    else if(c>=97 && c<=122){
        printf("the character is lowercase");
    }
    else if(c>=33 && c<=47){
        printf("special character");
    }
    else if(c>=48 && c<=57){
        printf("integer value");
    }
    return 0;
}