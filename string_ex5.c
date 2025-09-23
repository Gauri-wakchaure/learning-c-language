#include<stdio.h>
#include<string.h>

//strcmp strcpy example
int main(){
    char password[20],input[20];
    strcpy(password,"admin123");

    printf("Enter Password: \n");
    scanf("%s",&input);
    if(strcasecmp(password,input) ==0)
     printf("Access Granted");
     else
     printf("Access Denied");
}