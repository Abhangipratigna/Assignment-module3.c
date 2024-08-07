#include <stdio.h>

int main(){

double principal = 1000;
double rate = 9;
double time = 2;

double Amount = principal * (pow((1 + rate /100), time));

double CI = Amount - principal;

printf("Compound Interest is : %1f" ,CI);

}
