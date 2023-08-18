#include<stdio.h>

int main()
{
    int a, lastdigit, freq = 0, count;
    printf("Enter a Number :");
    scanf("%d", &a);

    for (;a>0;a=a/10)
    {
        lastdigit=a%10;
        switch (lastdigit)
        {
        case 0:
            count+=freq;
            printf("Fequency of 0 is : %d \n", count);
            freq=0;
        case 1:
            count+=freq;
            printf("Fequency of 1 is : %d \n", count);
            freq=0;
        
        case 2:
            count+=freq;
            printf("Fequency of 2 is : %d \n", count);
            freq=0;
            
        
        default:
            break;
        }




    }




    return 0;

}