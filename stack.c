#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;
void push(){
int data;
printf("enter data : ");
scanf("%d",&data);
if(top==N-1){
printf("stack is full");
}
else{
top++;
stack[top]=data;
printf("the pushed element is %d\n",data);
}
}
void pop(){
int item;
if(top==-1){
printf("stack is empty");
}
else{
item=stack[top];
top--;
printf("\nthe popped elememt is %d\n",item);
}
}
void peek(){
if(top==-1){
printf("stack is empty");
}
else{
printf("\nthe peek element is : %d\n",stack[top]);
}
}
void display(){
if(top==-1){
printf("stack is empty");
}
else{
printf("\nthe elements of the stack are : \n");
for(int i=top;i>=0;i--){
printf("%d\n",stack[i]);
}
}
}
int main(){
int choice;
printf("\n                MENU                             \n");
printf("\n 1.PUSH     \n");
printf("\n 2.POP    \n");
printf("\n 3.peek    \n");
printf("\n 4.display  \n");
printf("\n 5.exit       \n");
printf("\n--------------------------------------\n");
while(1){
printf("enter your choice: ");
scanf("%d",&choice);
switch(choice){
case 1:
push();
break;
case 2:
pop();
break;
case 3:
peek();
break;
case 4:
display();
break;
case 5:
exit(0);
break;
default:
printf("\n Wrong Choice");
break;
}
}
return 0;
}

