#include<stdio.h>

int main(){
    FILE *fp;

    fp = fopen("C:\\file_handlig\\write1.txt" , "a");

    if(fp==NULL){
        printf("File Does Not Exist");
        return 1;
    }
    fprintf(fp,"Hello this is Sakshi \n");
    fclose(fp);
    printf("Data written Successfully");
    return 0;
}