#include <stdio.h>

int main()
{
    int a = 2, in1, in2, max;
    printf("Enter 1st Number:");
    scanf("%d", &in1);
    printf("Enter 2nd Number: ");
    scanf("%d", &in2);
    if (in1 < in2)
        max=in2;
    else
        max=in1;
        
    while(1)
    {
        if((max%in1==0) && (max%in2==0))
           { printf("LCM of %d and %d is : %d", in1, in2, max);
            break;}
        max++;
    }
}