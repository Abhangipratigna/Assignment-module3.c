#include <stdio.h>

int main()
{
    double principal=80000;

    double rate=7;

    double time=5;

    double Amount = principal *
    ((pow((1 + rate /100),
          time)));

          double CI=Amount-principal;

          printf("compound Interest is : %1f",CI);

          return 0;
}
