#include <stdio.h>

int main(){

float days, years;

printf("Enter yout days:");
scanf("%f",&days);

years =(float) days/365;
days = (float) years*365;

printf("years: %.2f\n",years);
printf("days: %.2f\n",days);

printf("\nday: %.2f\n",days);
printf("years: %.2f\n",years);

return 0;

}
