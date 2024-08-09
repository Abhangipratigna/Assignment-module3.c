#include <stdio.h>

int main(){

printf("Accepet  5 employees name and salary and count average and total salary:");
printf("\n");

char emp[5][10];
int salary[5];
int total_s, ave_s;

for (int i=1; i<5; i++)
{
    printf("Employee %d:",i);
    printf("emp name: ");
    scanf("%s",emp[i]);
    printf("salary: ");
    scanf("%d",&salary[i]);

    total_s += salary[i];
}

ave_s = total_s/5;

printf("Total salary: %d\n", total_s);
printf("Average salary: %d\n", ave_s);


}
