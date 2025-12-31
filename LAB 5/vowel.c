#include<stdio.h>
int main(){
    char c;
    for(c ='A'; c <= 'Z'; c++){

    switch(c){
        case 'A':
        printf("%c is vowel\n", c);
        break;
        case 'E':
        printf("%c is vowel\n", c);
        break;
        case 'I':
        printf("%c is vowel\n", c);
        break;
        case 'O':
        printf("%c is vowel\n", c);
        break;
        case 'U':
        printf("%c is vowel\n", c);
        break;
        default:
        printf("%c is constant\n", c);
    }
}   

    return 0;
}