#include<stdio.h>
#include<string.h>

int main(){
    char name[20] = "Gauri Wakchaure";
    printf("Enter Your Name:\n");
    //scanf("%s",&name);
    gets(name);
    printf("Length of string is %d",strlen(name));
}