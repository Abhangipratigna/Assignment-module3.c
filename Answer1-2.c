#include <stdio.h>

void main(){

int number5, number6;

printf("Enter Number 5:");
scanf("%d",&number5);
printf("Enter Number 6:");
scanf("%d",&number6);

int sumResult = number5 + number6;
int subResult = number5 - number6;
int mulResult = number5 * number6;
float divResult =(float) number5 / number6;
int moduloResult = number5 % number6;

printf("\nsummation of %d and %d is : %d",number5,number6,sumResult);
printf("\nsubtraction of %d and %d is : %d",number5,number6,subResult);
printf("\nmultiplication of %d and %d is : %d",number5,number6,mulResult);
printf("\ndivision of %d and %d is : %.2f",number5,number6,divResult);
printf("\nmodulo of %d and %d is : %d",number5,number6,moduloResult);

}
