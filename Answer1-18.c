
#include <stdio.h>

int main(){

float AnnualPayment, basic, da, hra, dal, hral;

printf("Enter basic salary :");
scanf("%f", &basic);

printf("Enter DA :");
scanf("%f", &dal);

printf("Enter HRA:");
scanf("%f", &hral);

da = (dal *basic);
hra = (hral *basic);

AnnualPayment = basic + da + hra;

printf("\nannual salary of an Employee:%f\n",AnnualPayment);

return 0;

}
