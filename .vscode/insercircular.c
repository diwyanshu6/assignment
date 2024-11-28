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
    }}
    void d( struct node*p)
    {
        do
        {
            printf(" insertion in circular  %d ",p->data);
           p= p->next;
        } while(p!=head);
    }
    void ins(struct node * p,int pos)
    {
        struct node * t,*q;
        t=(struct node*)malloc(sizeof(struct node));
        t->data=4;
        for(int i=1;i<=pos-1;i++)
        {
            p=p->next;
        }
        
          
         t->next=p->next;
         
         p->next=t;
        
    }
    int main()
    {
       int a[4]={1,3,4,5};
       cr(a,4);
       ins(head,2); 
       d(head);
       return 0;
    }