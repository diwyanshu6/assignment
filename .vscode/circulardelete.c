#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node *next;
}* head;
void cr(int a[],int n)
{ 
    struct node*t,*last;

    head =(struct node*)malloc(sizeof(struct node));
    head->data=a[0];
    head->next=head;
    last=head;
    for(int i=1;i<n;i++)
    {
        t =(struct node*)malloc(sizeof(struct node));
         t->data=a[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
    void d( struct node*p)
    {
        do
        {
            printf("%d",p->data);
           p= p->next;
        } while(p!=head);
        
    }
 
}
void delete( int pos)
{
    struct node*p,*q;
for(int i=1;i<=pos-2;i++)
{
    p=p->next;
}
q=p->next;
p->next=q->next;
}
int main()
{
  a={1,2,3,4,5};
  cr(a,5);
  delete(3);
  d(head);
  return 0;
}
