#include <stdio.h>

void main()
{
    int username, password;
    
    printf("Enter your username: ");
    scanf("%d", &username);
    printf("Enter your password: ");
    scanf("%d", &password);
    
    if(username >= 100000){
        if(password >= 10000000){
            printf("Your username and password are correct.");
        }
        else{
            printf("Your password is very short. It should be atleast 8 digit long.");
        }
    }
    else{
        printf("Your username is wrong. It should be atleast 6 digit long");
    }
}