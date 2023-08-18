#include <stdio.h>

void main()
{
    // int a;
    // printf("Enter the No. of Day of the Week :");
    // scanf("%d", &a);
    // if (a == 1)
    // {
    //     printf("Today is Monday");
    // }
    // else if (a == 2)
    // {
    //     printf("Today is Tuesday");
    // }
    // else if (a == 3)
    // {
    //     printf("Today is Wednesday");
    // }
    // else if (a == 4)
    // {
    //     printf("Today is Thursday");
    // }
    // else if (a == 5)
    // {
    //     printf("Today is Friday");
    // }
    // else if (a == 6)
    // {
    //     printf("Today is Saturday");
    // }
    // else if (a == 7)
    // {
    //     printf("Today is Sunday");
    // }

    // else
    // {
    //     printf("Please enter a Valid Number of Day");
    // }
    //======================================================================================================================

    // int a;
    // printf("Enter the number of mounth :");
    // scanf("%d", &a);

    // if (a==2)
    // {
    //     printf("There are 28 days in Month %d", a);
    // }
    // else if (a%2==0)
    // {
    //     printf("There are 30 days in Month %d", a);
    // }
    // else
    // {
    //     printf("There are 31 days in Month %d", a);
    // }
    // ======================================================================================================================

    // int a, b;
    // printf("Enter Cost Price :");
    // scanf("%d", &a);
    // printf("Enter Selling Price :");
    // scanf("%d", &b);

    // if (a>b)
    // {
    //     printf("You are selling at a loss of %d", a-b);
    // }
    // else if (a<b)
    // {
    //     printf("You are selling at a Profit of %d", b-a);
    // }
    // else
    // {
    //     printf("Your are Cost Price is same as Selling Price, Come on dude ;)");
    // }
    // =========================================================================================================================

    // int a, b, c;
    // printf("Enter Your Marks in BEE :");
    // scanf("%d", &a);
    // printf("Enter Your Marks in Physics :");
    // scanf("%d", &b);
    // printf("Enter Your Marks in Maths-I :");
    // scanf("%d", &c);
    // printf("Your Grades are as follows \n");

    // if (a >= 90)
    // {
    //     printf("BEE : Grade A \n" );
    // }
    // else if (a >= 75)
    // {
    //     printf("BEE : Grade B \n");
    // }
    // else if (a >= 60)
    // {
    //     printf("BEE : Grade C \n");
    // }
    // else if (a >= 40)
    // {
    //     printf("BEE : Grade D \n");
    // }
    // else
    // {
    //     printf("BEE : FAIL \n");
    // }
    // //---------------------
    // if (b >= 90)
    // {
    //     printf("Physics : Grade A \n");
    // }
    // else if (b >= 75)
    // {
    //     printf("Physics : Grade B \n");
    // }
    // else if (b >= 60)
    // {
    //     printf("Physics : Grade C \n");
    // }
    // else if (b >= 40)
    // {
    //     printf("Physics : Grade D \n");
    // }
    // else
    // {
    //     printf("Physics : FAIL \n");
    // }
    // //-------------
    // if (c >= 90)
    // {
    //     printf("Maths-I : Grade A \n");
    // }
    // else if (c >= 75)
    // {
    //     printf("Maths-I : Grade B \n");
    // }
    // else if (c >= 60)
    // {
    //     printf("Maths-I : Grade C \n");
    // }
    // else if (c >= 40)
    // {
    //     printf("Maths-I : Grade D \n");
    // }
    // else
    // {
    //     printf("Maths-I : FAIL \n");
    // }
    // //================================================================================================================

    int a, n;
    // int a;
    // float n,
    printf("Enter the Number of Units used : ");
    scanf("%d", &a);
    printf("Billing Chargers as per Units are as Follows \n");
    printf("For the First 50 Units : Rs. 0.50 per unit \n");
    printf("For the Next 100 Units : Rs. 0.75 per unit \n");
    printf("For the Next 100 Units : Rs. 1.20 per unit \n");
    printf("For More than 250 Units : Rs. 2.00 per unit \n");
    printf("Plus a 15%% added Surcharge \n");
    printf("\n\n"); 

    if (a <= 50)
    {
        n = a * 0.50;
        printf("Your Total Electricty Bill is : Rs %d \n", n);
        printf("Additional Surcharge at 15%% : Rs. %d \n", n * 15 / 100);
        printf("Your Total Bill is : Rs. %d", (n + (n * 15 / 100)));
    }
    else if (a <= 150)
    {
        n = ((50 * 0.50) + ((a - 50) * 0.75));
        printf("Your Total Electricty Bill is : Rs %d \n", n);
        printf("Additional Surcharge at 15%% : Rs. %d \n", n * 15 / 100);
        printf("Your Total Bill is : Rs. %d", (n + (n * 15 / 100)));
    }
    else if (a <= 250)
    {
        n = ((50 * 0.50) + (100 * 0.75) + ((a - 150) * 1.20));
        printf("Your Total Electricty Bill is : Rs %d \n", n);
        printf("Additional Surcharge at 15%% : Rs. %d \n", n * 15 / 100);
        printf("Your Total Bill is : Rs. %d", (n + (n * 15 / 100)));
    }

    else
    {
        n = ((50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((a - 500) * 2.00));
        printf("Your Total Electricty Bill is : Rs %d \n", n);
        printf("Additional Surcharge at 15%% : Rs. %d \n", n * 15 / 100);
        printf("Your Total Bill is : Rs. %d", (n + (n * 15 / 100)));
    }
}