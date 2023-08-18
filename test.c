#include <stdio.h>

void main()
{
    int a;
    float sum;

    printf("Enter the your basic Salary : ");
    scanf("%d", &a);

    switch (a < 10000)
    {
    case 1:
        sum = a + (a * 0.55) + (a * 0.08);
        break;

    case 0:
        switch (a < 20000)
        {
        case 1:
            sum = a + (a * 0.5) + (a * 0.1);
            break;

        case 0:
            switch (a < 30000)
            {
            case 1:
                sum = a + (a * 0.45) + (a * 0.12);
                break;

            case 0:
                switch (a < 40000)
                {
                case 1:
                    sum = a + (a * 0.4) + (a * 0.15);
                    break;

                case 0:
                    sum = a + (a * 0.35) + (a * 0.2);
                    break;
                }
            }
        }
    }

    printf("Your total Salary will be %.2f", sum);
}
