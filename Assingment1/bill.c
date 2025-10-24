#include<stdio.h>
#include<math.h>
int main(){
    float a, bill1, bill2, bill3, bill4;
    printf("Enter units consumed :");
    scanf("%f", &a);

    bill1 = a*1.5;
    bill2 = 100*1.5 + (a - 100)*2;
    bill3 = 100*1.5 + 200 + (a - 200)*3;
    bill4 = 100*1.5 + 200 + 300 + (a - 300)*5;

    if (a >= 0 && a <= 100){
        printf("total bill in rs : %f", bill1);
    }
    else if(a >= 101 && a <= 200){
        printf("total bill in rs : %f", bill2);
    }
    else if(a >= 201 && a <= 300){
        printf("total bill in rs : %f", bill3);
    }
    else if(a <= 300){
        printf("total bill in rs : %f", bill4);
    }
    return 0;
}