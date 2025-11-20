#include<stdio.h>
int main(){
    float m, v, KE;
    printf("Enter the mass in kg : ");
    scanf("%f", &m);
    printf("Ethe velocity in m/s :");
    scanf("%f", &v);

    KE = 0.5*m*v*v;

    printf("the required knetic energy is %f", KE);
    return 0;
}