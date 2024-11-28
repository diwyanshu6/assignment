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


}
void ins(struct node*p ,int n, int index){
 struct node*q;
 q=(struct node*)malloc(sizeof(struct node));

    for(int i =0;i<index-1;i++)
    {
      p=p->next;
    }
  q->data=n;
  q->next =p->next;
  p->next =q;
}

void dis( struct node*p)
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
    ins(head,9,5);
    dis(head);
    return 0;
}