#include<stdio.h>

int main()
{
    int a = 3;
    int b = 5;  

    printf("Area of Rectangle of side %d %d is : ", a, b);
    printf("%d \n", a*b);

    printf("Area of Square of sides %d is :", a );
    printf("%d \n", a*a);

    printf("Area of Circle of radius %d is :", a);
    printf("%d \n", 3.14*(a*a));
    
    return 0; 
}