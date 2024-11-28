#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node *next;
}* head;
void cr(int a[],int n)
{ 
    struct node *t,*last;

    head =(struct node *)malloc(sizeof(struct node));
    head->data=a[0];
    head->next=head;
    last=head;
    for(int i=1;i<n;i++)
    {
        t =(struct node *)malloc(sizeof(struct node));
         t->data=a[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }}
    void ins ( struct node *p) 
{
    while(p->next!=NULL){
        p=p->next;
    }
    struct node *t;
 
   t =(struct node*)malloc(sizeof(struct node));
    t->next=head;
    t->data=4;
   t=head;
   p->next=head;
   printf("code");
  return;
}
    


void dis( struct node *p)
{
    do{
        printf("%d ",p->data);
       p= p->next;
    } while(p!=head);
}
int main ()
{
    int a[5]={1,4,7,90,7};
    cr(a,5);
    ins(head);
    dis(head);
    
    return 0;
}