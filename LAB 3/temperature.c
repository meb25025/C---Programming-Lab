#include<stdio.h>
int main(){
    float t;
    printf("Enter the temperature in degree celcius :");
    scanf("%f", &t);
     if(t >= 40 && t <= 60){
        printf("your temp is safe\n");
     }
     else{
        printf("danger");
     }

     return 0;
}