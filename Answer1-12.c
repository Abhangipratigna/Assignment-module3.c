#include <stdio.h>

int main(){

int student,apples;

printf("Enter your student:");
scanf("%d",&student);

printf("Enter your apples:");
scanf("%d",&apples);

int divResult=student/(float)apples;
printf("\nDivision of %d and %d is :%.2f",student,apples,divResult);

return (0);

}
