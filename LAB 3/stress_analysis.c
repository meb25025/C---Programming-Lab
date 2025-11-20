#include<stdio.h>
int main(){
    float AppliedStress, MaterialYield;
    printf("applied stress(MPa) = ");
    scanf("%f", &AppliedStress);
    printf("Material Yield Strenght(MPa) =");
    scanf("%f",&MaterialYield);

    float fos;
    fos = MaterialYield / AppliedStress;

    if (fos<1.5){
        printf("danger redesign needed");
    }
    else if(1.5 <= fos && fos < 2.0){
        printf("Acceptable with monitoring");
    }
    else{
        printf("safe design");
    }
    return 0;
}