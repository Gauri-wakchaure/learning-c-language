#include<stdio.h>
#include<string.h>

int main(){
    char name1[20] = "Gauri Wakchaure";
    char name2[20];
    strcpy(name2,name1);

    printf("Enter Your Name:");
    gets(name1);
    printf("Name 1 = %s \n",name1);
    printf("Name 2 = %s \n",name2);

}