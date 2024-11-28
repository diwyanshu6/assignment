#include<stdio.h>
#include<stdlib.h>
struct node{
    int data; 
    struct node* next;
}*first=NULL;
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
  void d(struct node *p){
  while(p!=NULL)
  {
    printf("%d ",p->data);
    p=p->next;
  }


}
void reverse( struct node*p)
{
  
   struct node* q,*r,*t;

    r=NULL;
    q=NULL;
    while(p!=NULL)
    { 
        r=q;
        q=p;
        p=p->next; 
        q->next=r;
    }
    first=q;  
    return;

}
int main()
{
  int a[5]={1,2,3,4,5};
  cre(a,5);
 
   reverse(first);
    d(first);
return 0;
}