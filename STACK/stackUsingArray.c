#include<stdio.h>
#include<process.h>
void push();
void pop();
void traverse();
int stack[5],top=-1;
int main(){
  int choice;
  do{
  printf("\nSelect the key according to your opeartion:");
  printf("\n1:for push\n2:for pop\n3:for traverse\n4:for exit\n");
  scanf("%d",&choice);
    switch(choice){
      case 1:push();break;
      case 2:pop();break;
      case 3:traverse();break;
      case 4:exit(0);
  }
}while(choice!=4);
}
void push(){
  if(top==4)
  printf("\nstack is full");
  else{
    top=top+1;
    printf("\nenter element:");
    scanf("%d",&stack[top]);
  }
}
void pop(){
  if(top==-1)
  printf("\nstack is empty");
  else{
    printf("\nthe deleted element is %d\n",stack[top]);
    top=top-1;
  }
}
void traverse(){
  int i;
  for(i=top;i>=0;i--){
    printf("\n%d",stack[i]);
  }
}
