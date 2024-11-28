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
    void insert(struct node*p,int index,int x){
        struct node *t;
        
        if(index<0||index>count(p))
        {
            return;
        }
         t=(struct node *)malloc(sizeof(struct node));
         t->data=x;
        if(index==0)
        {
            t->next=first;
            first=t;
        }
        else
        {
            for(int i=0;i<index-1;i++){
            
                p=p->next;}
            
            t->next=p->next;
            p->next=t;
        }
        return ;
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
 void d(struct node *p){
  while(p!=NULL)
  {
    printf("%d ",p->data);
    p=p->next;
  }
  return;
 }

int main ()
{
   int a[3]={1,2,3};
   cr(a,3);
  //  printf("%d ",count(first));
  //   printf("%d ",sum(first));
    insert(first ,0,3);
    d(first);
   return 0;

}