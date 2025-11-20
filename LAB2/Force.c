#include<stdio.h>
int main(){
    float m, a, force;
    printf("Enter the mass in kg : ");
    scanf("%f", &m);
    printf("Enter the accerelaration in m/s2 :");
    scanf("%f", &a);

    force = m*a;
    printf("The required force in N is %f", force);
    return 0;
}