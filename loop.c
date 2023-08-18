#include <stdio.h>
#include <math.h>

int main()
{
    // int a = 0, n, sum = 0;
    // printf("Enter No. of terms :");
    // scanf("%d", &n);
    // for (; a <= n; a++)
    // {
    //     printf("%d \t ", a);
    //     sum += a;
    // }
    // printf("\n");
    // printf("%d", sum);
    // //====================================

    // int limit, terms = 1, num = 0, sum = 0;
    // printf("Enter the limit of the terms:");
    // scanf("%d", &limit);

    // for (; terms <= limit; terms++)
    // {
    //     num = 10 * num + 2;
    //     printf("%d \t", num);
    //     sum += num;
    // }
    // printf("\n");
    // printf("%d", sum);
    // //==========================================================

    // int a = 50;
    // for(;a<=200;a++)
    // {
    //     if(a%7==0)
    //     printf("%d \t", a);
    // }
    // //================================================================

    // int a, term = 1, sum = 0;
    // printf("Enter a Number :");
    // scanf("%d", &a);
    // for (; a > 0; a = a / 10)
    // {
    //     term = 1;
    //     sum += term;
    // }
    // printf("Sum of digits is : %d", sum);
    // //==============================================================

    // int input, first = 0, last = 0 ;
    // printf("Enter 1st Digit : ");
    // scanf("%d", &input);

    // last=input%10;
    // for(; input>0; input=input/10){
    //     first=input;
    // }
    // printf("%d and %d are First and Last digits", first, last);
    // //=================================================================

    // int a, prod = 1;
    // printf("Enetr a Number : ");
    // scanf("%d", &a);

    // for(;a>0;a=a/10)
    // {
    //     prod= prod * (a%10);
    // }
    // printf("Product of digits of the numbers is : %d", prod);
    // //===================================================================

    // int input, first, last, mid, term = 0, a;
    // printf("Enter a Number : ");
    // scanf("%d", &input);

    // last=input%10;
    // a=input;
    // for(;input>0;input=input/10)
    // {
    //     first=input;
    //     term++;
    // }

    // last = last* pow(10, term-1);

    // mid=(a-first*pow(10, term-1))/10;

    // printf("New Number is %d", (last+(mid*10)+first));
    //     //==============================================================

    int n, rev = 0;
    printf("Enter a Num. : ");
    scanf("%d", &n);

    for (; n > 0; n = n / 10)
    {
        rev = ((rev * 10) + (n % 10));
    }
    printf("Rev : %d \n", rev);

    for (; rev > 0; rev = rev / 10)
    {
        switch (rev % 10)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
    }
    //============================================================

    return 0;
}