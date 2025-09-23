#include<stdio.h>
#include<string.h>

//strcmp strcpy example
int main(){
    char name1[20] = "Hello ";
    char name2[20] = "Gauri ";
    char str[20] = "Wakchaure";
    strcat(name1,name2);
    strcat(name1,str);

    printf("Concatnated String = %s",name1);
    //scanf("%s",&input);
    
}