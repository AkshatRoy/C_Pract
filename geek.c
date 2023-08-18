#include <stdio.h>

void main()
{

    // int N;
    // scanf("%d", &N);
    // if (N < 5)
    // {
    //     printf("Less than 5");
    // }
    // else if (N > 5)
    // {
    //     printf("Grater than 5");
    // }
    // else
    // {
    //     printf("Equal to 5");
    // }
    //================================================================================

    // //Program to find max between 2
    // int a, b;
    // printf("Enter a 1st Number :");
    // scanf("%d", &a);
    // printf("Enter a 2nd Number :");
    // scanf("%d", &b);

    // if (a > b)
    // {
    //     printf("%d is greater than %d", a, b);
    // }
    // else if (b > a)
    // {
    //     printf("%d is greater than %d", b, a);
    // }
    // else
    // {
    //     printf("Both numbers are equal");
    // }
    // //==============================================================================

    //Program to find greatest in 3

    int a, b, c;
    printf("Enter 1st Number :");
    scanf("%d", &a);
    printf("Enter 2nd Number :");
    scanf("%d", &b);
    printf("Enter 3rd Number :");
    scanf("%d", &c);
    
    if ((a == b))
    {
        printf("Two Numbers are equal to %d", a);
    }
    else if ((a == c))
    {
        printf("Two Numbers are equal to %d", a);
    }
    else if ((c == b))
    {
        printf("Two Numbers are equal to %d", b);
    }

    else if (a > b)
    {
        if (a > c)
        {
            printf("%d is the greatest out of the 3 Numbers", a);
        }
        else
        {
            printf("%d is the greatest out of the 3 Numbers c", c);
        }
    }
    else if (b > c)
    {
        if (b > c)
        {
            printf("%d is the greatest out of the 3 Numbers", b);
        }
        else
        {
            printf("%d is the greatest out of the 3 Numbers c", c);
        }
    }

    else
    {
        printf("All three numbers are equal to %d", a);
    }
}
