#include<stdio.h>
#include<stdlib.h>

struct node{
  int info;
  struct node *next;
};
struct node *start=NULL;
void insertNode(){
  struct node *p,*temp;
  int choice;
  printf("press\n1:for insert at begin\n2:for insert at end");
  scanf("%d",&choice);
  if(choice==2){
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value");
    scanf("%d",&p->info);
    p->next=NULL;
    if(start==NULL)
    start=p;
    else{
      temp=start;
      while(temp->next!=NULL)
      temp=temp->next;
    temp->next=p;
    }
  }
  if(choice==1){
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value");
    scanf("%d",&p->info);
    p->next=NULL;
    if(start==NULL)
    start=p;
    else{
      p->next=start;
      start=p;
  }
}
}
void deleteNode(){
  struct node *r,*t;
  int choice;
  r=start;
  if(start==NULL)
  printf("\t..........LIST IS EMPTY.......");
  else{
    printf("press\n1:delete from begin\n2:delete from end");
    scanf("%d",&choice);
    if(choice==1){
      start=start->next;
      free(r);
    }
    if(choice==2){
      t=start;
      while(t->next->next!=NULL)
      t=t->next;
    t->next=NULL;
    //free(t);
    }
  }
}
void traverse(){
  struct node *temp;
  temp=start;
  if(start==NULL)
  printf("\t..........LIST IS EMPTY.......");
  else{
    while(temp!=NULL){
      printf("%d\t",temp->info);
      temp=temp->next;
    }
  }
}
int main(){
  int choice;
  do{
    printf("Press\n1:for insertNode\n2:for deleteNode\n3:for traversing\n4:for exit\n");
    printf("Enter your Choice");
    scanf("%d",&choice);
    switch(choice){
      case 1:insertNode();break;
      case 2:deleteNode();break;
      case 3:traverse();break;
      case 4:printf("......Exited.....");break;
    }
  }while(choice!=4);
}
