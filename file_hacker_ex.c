#include<stdio.h>

int main(){
    FILE *fp;
    int numbers[5]={1,20,30,40,50};
    fp = fopen("C:\\file_handlig\\hacker.bin" , "wb");

    if(fp==NULL){
        printf("File Does Not Exist");
        return 1;
    }
    
    fwrite(numbers,sizeof(int),5,fp);
    fclose(fp);
    printf(" Binary Data written Successfully");
    return 0;
}