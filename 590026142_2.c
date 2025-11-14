#include <stdio.h>
int main()
{
    int a, b;
    int sum, diff, prod;
    float quot;
    printf("Enter Two Numbers: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    diff = a - b;
    prod = a * b;
    if (b != 0)
    {
        quot = (float)a / b;
        printf("Quotient is = %.2f\n", quot);
    }
    else
    {
        printf(" Division is not possible(Denominater is 0)/n");
    }
    printf("Sum is = %d\n", sum);
    printf("Diffrence = %d\n", diff);
    printf("Product = %d\n", prod);

    return 0;
}