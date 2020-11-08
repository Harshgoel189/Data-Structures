#include<stdio.h>
#include<stdlib.h>
struct queue{
  int info;
  struct queue *next;
};
struct queue *front=NULL,*rear=NULL;
void enqueue();
void dequeue();
void traverse();
int main(){
  int choice;
  do{
    printf("\nPress\n1:for insert element\n2:for delete the element\n3:for dispaly\n4:for exit\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:enqueue();break;
      case 2:dequeue();break;
      case 3:traverse();break;
      case 4:printf("\t....you are exited....");
    }
  }while(choice!=4);
}
void enqueue(){
  struct queue *p;
  p=(struct queue*)malloc(sizeof(struct queue));
  printf("Enter the element");
  scanf("%d",&p->info);
  p->next=NULL;
  if(front==NULL)
    front=rear=p;
  else{
    rear->next=p;
    rear=p;
  }
}
void dequeue(){
  if(front!=NULL){
    printf("Deleted element is :%d",front->info);
    if(front==rear)
    front=rear=NULL;
    else
    front=front->next;
  }
  else
  printf("Queue is empty");
}
void traverse(){
  struct queue *p;
  p=front;
  while(p!=NULL){
    printf("%d\t",p->info);
    p=p->next;
  }
}
