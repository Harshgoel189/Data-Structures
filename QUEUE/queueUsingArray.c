#include<stdio.h>
void enqueue();
void dequeue();
void display();
int queue[5],front=-1,rear=-1;
int main(){
  int choice;
  do{
    printf("\nPress\n1:for insert element\n2:for delete the element\n3:for dispaly\n4:for exit\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:enqueue();break;
      case 2:dequeue();break;
      case 3:display();break;
      case 4:printf("\t....you are exited....");
    }
  }while(choice!=4);
}
void enqueue(){
  int item;
  if(rear<4){
    printf("Enter the element:");
    scanf("%d",&item);
    if(front==-1){
      rear=0;front=0;
    }
    else{
      rear=rear+1;
    }
    queue[rear]=item;
  }
  else
  printf("\t\t\t.....Queue is full.....");
}
void dequeue(){
  int item;
  if(front!=-1){
    item=queue[front];
    if(front==rear){
      rear=-1;front=-1;
    }
    else{
      front=front+1;
    }
    printf("The deleted element is %d : ",item);
  }
  else{
    printf("\t\t\t....Queue is Empty....");
  }
}
void display(){
  int i;
  for(i=front;i<=rear;i++)
  printf("\n%d",queue[i]);
}
