#include<stdio.h>

void main(){

    // int a;
    // printf("Enter the number to be squared : ");
    // scanf("%d", &a);
    // if(a<=10)
    // {
    //     a = a*a;
    //     printf("Square of the Number is : %d", a); 
    // }
    // else
    // {
    //     printf("Please enter a number smaller than 10"); 
    // }

    // int a, b;
    // printf("Enter 1st Number : ");
    // scanf("%d", &a);
    // printf("Enter 2nd Number : ");
    // scanf("%d", &b);
    // if (a>b)
    // {
    //     printf("%d is greater than %d", a, b);
    // }
    // else if (a<b)
    // {
    //      printf("%d is greater than %d", b, a);
    // }
    // else
    // {
    //     printf("Both numbers are Equal to %d", a);
    // }
    
    // int a, b, c;
    // printf("Enter 1st angle of the Traiangle : ");
    // scanf("%d", &a);
    // printf("Enter 2nd angle of the Traiangle : ");
    // scanf("%d", &b);
    // printf("Enter 3rd angle of the Traiangle : ");
    // scanf("%d", &c);

    // if(a+b+c== 180)
    // {
    //     printf("The given triangle is Valid");
    // }
    // else
    // {
    //     printf("The given triangle is Invalid ");
    // }

    // int a;
    // printf("Enter a Number : ");
    // scanf("%d", &a);
    // if((a%7)&&(a%9)== 1)
    // {
    //     printf("Given number is divisible by both 7 and 9");
    // }
    // else
    // {
    //     printf("Given number is not divisible by both 7 and 9");
    // }

    // char a;
    // printf("Enter a Character : ");
    // scanf("%c", &a);

    // if ((a>='a' && a<='z') || (a>= 'A' && a<= 'Z')){
    //     printf("Given character %c is an alpahbet ", a);
    // }
    // else
    // {
    //     printf("Given character %c is not a Alphabet", a);
    // }
    
    // char a;
    // printf("Enter a Small Alphabet :");
    // scanf("%c", &a);
    // if ((a == 'a') || (a == 'e') || (a == 'i') || (a == 'o') || (a == 'u'))
    // {
    //     printf("%c is a Vowel", a);
    // }
    // else
    // {
    //     printf("%c is a Consonent ", a);
    // }
    
    // int a;
    // printf("Enter a Number to be checked : ");
    // scanf("%d", &a);
    // if ((a%5)== 0)
    // {
    //     printf("%d is a Multiple of 5", a);
    // }
    // else
    // {
    //     printf("%d is Not a Multiple of 5", a);
    // }

    // int a;
    // printf("Enter your Age :");
    // scanf("%d", &a);
    // if (a>=18)
    // {
    //     printf("You are Eligible to Vote");
    // }
    // else
    // {
    //     printf("You are Not Eligible to Vote");
    // }

    // char a;
    // printf("Enter a Character : ");
    // scanf("%c", &a);
    // if (a>='a' && a<='z')
    // {
    //     printf("Given character is a Lowercase Alphabet ");
    // }
    // else
    // {
    //     printf("Given character is a Uppercase Alphabet ");
    // }
    
    // int a;
    // printf("Enter Amount : ");
    // scanf("%d", &a);
    // if (a>= 1000)
    // {
    //     printf("A 10per cent discount is added to your bill \n");
    //     printf("New amount is : %d", a-(a*10/100));
    // }
    // else
    // {
    //     printf("A 5per cent discount is added to your bill \n");
    //     printf("New amount is : %d", a-(a*5/100));
    // }

    // int a; 
    // printf("Enter your Grades : ");
    // scanf("%d", &a);
    // if (a>=40)
    // {
    //     printf("You have Passed your Exams ");
    // }
    // else
    // {
    //     printf("You have Failed your Exams ");
    // }    

    char c;
    printf("Enter a Character :");
    scanf("%c", &c);

    if(((c>='a') && (c<='z')) || ((c>='A') && (c<='Z')) || ((c>='0') && (c<='9')))
    {

        printf("The given character is Not a Special Character ");
    }
    else
    {
        printf("The given character is a Special Character ");
    }
    

    
    
}
    