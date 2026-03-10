#include <stdio.h>

#include <math.h>

int main ()
{
    double principal = 0.0;
    double rate = 0.0;
    int year = 0;
    int timeCompounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal (P):");
    scanf("%lf", &principal);

    printf ("Enter the interest rate (r):");
    scanf ("%lf", &rate);
    rate = rate/ 100;

    printf("Enter the # of year(t): ");
    scanf("%d", &year);

    printf ("Enter # of times compunded per year(n): ");
    scanf ("%d", &timeCompounded);
      total = principal * pow (1 + rate / timeCompounded, timeCompounded* year);
      printf ("After %d years ,the total will be $%.2ld", year, total);
    return 0;
}