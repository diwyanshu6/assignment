#include<stdio.h>
#include<stdlib.h>
struct node 
{ int data;
  struct node* next ;

} * first ;
 void cr( int a[],int n)
 {
    struct node  *last,*t ,*q;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->next =NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
 t=(struct node*)malloc(sizeof(struct node));
    t->data=a[i];
    t->next =NULL;
    last->next=t;
    last=t; 
    }}
    int count( struct node*p)
    {
      int i,c=0;
      while(p!=NULL)
      {
        c++;
        p=p->next;

      }
      return c;
    }
    
 int sum ( struct node*p)
    {
      int i,c=0;
      while(p!=NULL)
      {
        c=c+p->data;
        p=p->next;

      }
      return c;
    }
 


int main ()
{
   int a[5]={1,2,3,4,5};
   cr(a,5);
   printf("%d ",count(first));
    printf("%d ",sum(first));
   return 0;

}