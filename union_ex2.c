#include<stdio.h>
struct EmployeeS {
    int id;
    char name[20];
    char designation[20];
    int salary;
};
union EmployeeU {
    int id;
    char name[20];
    char designation[20];
    int salary;
};
int main(){
    struct EmployeeS e1;
    printf("size of Struct = %d \n",sizeof(e1));

    union EmployeeU e2;
    printf("size of Union = %d \n",sizeof(e2));
    int a;
    char b;
    printf("Size of int =%d \n Size of char = %d",sizeof(a),sizeof(b));
    return 0;
}