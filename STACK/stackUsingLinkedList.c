#include<stdio.h>
#include<stdlib.h>
struct stack{
  int info;
  struct stack *next;
};
struct stack *top=NULL;
void push();
void pop();
void traverse();
int main(){
  int choice;
  do{
    printf("Press\n1:for push\n2:for pop\n3:for traverse\n4:for exit\n");
    printf("Enter your Choice");
    scanf("%d",&choice);
    switch(choice){
      case 1:push();break;
      case 2:pop();break;
      case 3:traverse();break;
      case 4:printf("......Exited.....");break;
    }
  }while(choice!=4);
}
void push(){
  struct stack *p;
  p=(struct stack*)malloc(sizeof(struct stack));
  printf("Enter the element:");
  scanf("%d",&p->info);
  p->next=top;
  top=p;
}
void pop(){
  struct stack *p;
  p=top;
  if(top==NULL)
  printf(".....Stack is Empty.....");
  else{
    printf("%d",top->info);
    top=top->next;
  }
  free(p);
}
void traverse(){
  struct stack *p;
  p=top;
  while(p!=NULL){
    printf("%d\t",p->info);
    p=p->next;
  }
}
