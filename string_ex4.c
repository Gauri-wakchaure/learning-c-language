#include<stdio.h>
#include<string.h>

int main(){
    char s1[20] = "Gauri";
    char s2[20] = "gauri";

    if(strcasecmp(s1,s2) ==0)
     printf("String are Equal");
     else
     printf("String are not Equal");
}