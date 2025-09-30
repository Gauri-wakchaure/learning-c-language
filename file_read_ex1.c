#include<stdio.h>

int main(){
    FILE *fp;
    char str[200];
    fp = fopen("C:\\file_handlig\\write1.txt" , "r");

    if(fp==NULL){
        printf("File Does Not Exist");
        return 1;
    }
    printf("File Content : \n");
    while(fgets(str,sizeof(str),fp)  != NULL){
        printf("%s",str);
    }
    
    fclose(fp);
    printf("Data written Successfully");
    return 0;
}