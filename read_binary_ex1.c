#include<stdio.h>

int main(){
    FILE *fp;
    int i;
    int numbers[5];
    fp = fopen("C:\\file_handlig\\hacker.bin" , "rb");

    if(fp==NULL){
        printf("File Does Not Exist");
        return 1;
    }
    
    fread(numbers,sizeof(int),5,fp);
    fclose(fp);
    printf(" Binary Data :");
    for(i=0;i<5;i++){
        printf("%d \n ",numbers[i]);
    }
    return 0;
}