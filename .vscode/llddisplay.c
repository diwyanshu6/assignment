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
   void duplicate (int *p)


}
void reverse( struct node*q)
{
    int *A;
    A=(int *)malloc(sizeof(int )*(5));
   struct node* p;
    int i;
    while(q!=NULL)
    {
        A[i]=q->data;
       q= q->next;
        i++;
    }
    p=first;
    i--;
    while(p!=NULL)
    {
         p->data = A[i];
        p=p->next;
        i--;
    }
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