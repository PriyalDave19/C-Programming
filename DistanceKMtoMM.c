#include<stdio.h>
void main(){
    int km , mm;
    printf("Please enter a KiloMeters to be converted in MiliMeter\n");
    scanf("%d",&km);

// 1 KM = 10,00000 MM

    mm = 1000000 * km;
    printf("%d Kilometers to %d MiliMeters\n",km,mm);
}