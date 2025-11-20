#include<stdio.h>
int main(){
    float vibration_amplitude, frequency;
    printf("Enter the vibration amplitude(mm)");
    scanf("%f", &vibration_amplitude);
    printf("Enter the frequency(Hz)");
    scanf("%f", &frequency);
    if(vibration_amplitude>0.5 && 20<frequency && frequency<50){
        printf("high risk");
    }
    else if(vibration_amplitude>0.5 || frequency > 60){
        printf("medium risk");
    }
    else{
        printf("low risk");
    }
    return 0;
}