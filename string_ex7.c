#include<stdio.h>
#include<string.h>

void displayString(char str[]);   

int main(){
    char str[50];
    printf("Enter your full name: ");
    
    //safe
    fgets(str, sizeof(str), stdin);
    
    str[strcspn(str, "\n")] = '\0';
    
    displayString(str);
    
    return 0;
}

void displayString(char str[]){
    printf("Entered String = %s\n", str);
}
