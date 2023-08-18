#include <stdio.h>

void main()
{
    float balance;
    char gender, cont = 'y';

    while (cont == 'y')
    {
        printf("Enter your balance: ");
        scanf("%f", &balance);
        printf("Enter your gender (f/m): ");
        scanf(" %c", &gender);

        if ((gender == 'f') && (balance > 10000))
        {
            balance += (balance * 0.1);
        }
        else if ((gender == 'f') && (balance > 10000))
        {
            balance += (balance * 0.05);
        }
        else
        {
            balance += (balance * 0.02);
        }

        printf("Your Total balance will be %.2f \n", balance);
        printf("Do you want to continue again (y/n): ");
        scanf(" %c", &cont);
    }
}