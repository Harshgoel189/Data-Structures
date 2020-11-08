#include<stdio.h>
#include<process.h>
#include<stdlib.h>
struct node{
  int info;
  struct node*next;
};
typedef struct node node;
node*start=NULL;
void insertNode_beg();
void deleteNode_beg();
void insertNode_end();
void deleteNode_end();
void traverseList();
int main(){
  int choice;
  while(1){
    printf("\nPress\n1:for insert at begining\n2:for insert at end\n");
    printf("3:delete from begining\n4:delete from end\n5:traverse the list\n6:for exit\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:insertNode_beg();break;
      case 2:insertNode_end();break;
      case 3:deleteNode_beg();break;
      case 4:deleteNode_end();break;
      case 5:traverseList();break;
      case 6:exit(0);
    }
  }
}
void insertNode_beg(){
  if(start==NULL)
  printf("*******Can not inserted at begining********");
  else{
    node*p;
    p=(node*)malloc(sizeof(node));
    printf("Enter the value\n");
    scanf("%d",&p->info);
    p->next=start;
    start=p;
  }
}
void insertNode_end(){
  node*p,*t;
  p=(node*)malloc(sizeof(node));
  printf("Enter the value\n");
  scanf("%d",&p->info);
  p->next=NULL;
  if(start==NULL)
  start=p;
  else{
    t=start;
    while(t->next!=NULL){
      t=t->next;
    }
    t->next=p;
  }
}
void deleteNode_beg(){
  if(start==NULL)
  printf("********can't delete from begining********");
  else{
    node*p=start;
    start=start->next;
    free(p);
  }
}
void deleteNode_end(){
  if(start==NULL)
  printf("*******Can't delete the node*********");
  else{
    node*temp,*prev;
    temp=start;
    while(temp->next!=NULL){
      prev=temp;
      temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
  }
}
void traverseList(){
  node*t;
  t=start;
  while(t!=NULL){
    printf("%d\t",t->info);
    t=t->next;
  }
}
