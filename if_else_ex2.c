#include<stdio.h>

int main(){
    int marks;
    printf("Enter your Marks:");
    scanf("%d",&marks);

    if(marks>35){
        printf("You are Pass");
    }
    else{
        printf("You Are Fail");
    }
}