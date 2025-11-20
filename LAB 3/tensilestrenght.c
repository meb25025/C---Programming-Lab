#include<stdio.h>
int main(){
    float a, b;
    printf("Enter the first tensile strenght :");
    scanf("%f", &a);
    printf("Enter the second tensile : ");
    scanf("%f", &b);

    if(a>b){
        printf("first has the highest tensile strenght");
    }
    else if(b>a){
        printf("second has the highest tensile strenght");
    }
    else{
        printf("both have same tensile strenght");
    }
    return 0;
}