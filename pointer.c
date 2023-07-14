#include<stdio.h>
int main(){
int var=10;
int* pointer=&var;
printf("the value of var : %d\n",var);
printf("the value of var : %d\n",*pointer);
printf("the address of var : %p\n",&var);
printf("the address of var : %p\n",pointer);
}
