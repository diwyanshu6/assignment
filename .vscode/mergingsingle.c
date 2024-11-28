#include<stdio.h>
#include<stdlib.h>
struct node{
    int data; 
    struct node* next;
}*first=NULL,*second=NULL,*third=NULL;
void cre( int a[], int n)
{
  struct node*last ,*t;
  first=(struct node *)malloc(sizeof(struct node));
  first->data=a[0];
  first->next=NULL;
  last=first;
  for(int i=1;i<n;i++)
  {
    t=(struct node *)malloc(sizeof(struct node));
    t->data=a[i];
    t->next =NULL;
    last->next=t;
    last=t;
  }}
  void cre2( int b[], int n)
{
  struct node*last ,*t;
  second=(struct node *)malloc(sizeof(struct node));
  second->data=b[0];
  second->next=NULL;
  last=second;
  for(int i=1;i<n;i++)
  {
    t=(struct node *)malloc(sizeof(struct node));
    t->data=b[i];
    t->next =NULL;
    last->next=t;
    last=t;
    
  }
  return;
  }

   void merge( struct node *p)
  {
    while(p->next!=NULL)
    {
    p=p->next;
    }
    p->next=second;
    // while(p!=NULL){
    // p=p->next;
    // }
 return ;
  }
  void d(struct node *p){
  while(p!=NULL)
  {
    printf("%d ",p->data);
    p=p->next;
  }

return;
}
int main()
{
  int a[5]={1,2,3,4,5};
  int b[4]={1,6,3,4};
  cre(a,5);
  cre2(b,4);
  merge(first);
  d(first);
return 0;
}