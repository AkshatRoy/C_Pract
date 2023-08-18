#include <stdio.h>
#include <math.h>

int main()
{

    int limit, denom = 1, a = 1;
    float sum = 0, b = 1;
    printf("Enter a Limit for the function : ");
    scanf("%d", &limit);

    for (; limit > 0; limit--)
    {
        a = a * denom;
        printf("1/%d! ", denom);
        printf("or 1/%d \t", a);
        printf("\n");
        b = a;
        sum = (sum + (1 / b));
        denom++;
    }
    printf("Sum = %f", sum);

    return 0;
}