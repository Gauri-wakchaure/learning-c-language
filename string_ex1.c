#include<stdio.h>

void main(){
char name[100];
printf("Enter your full name:");
//scanf("%s",&name);
gets(name);
printf("My name is = %s",name);
}