#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node *prev;
    int data ;
    struct node *next;

}*first=NULL,*last=NULL,*t =NULL;
void cr(int a[],int n )
{
    
first=(struct node*)malloc(sizeof(struct node ));
first->data=a[0];
first->prev=first->prev=NULL;
last =first;
for (int i=1;i<n;i++)
{
    t=(struct node*)malloc(sizeof(struct node ));
    t->data=a[i];
    t->next=last->next;
    t->prev=last;
    last->next=t;
    last=t;
    printf(" display");
    
    
}
}
 void dis(struct node *p)
 {
    while(p)
    {
        printf("loop");
        printf(" %d",p->data);
        p=p->next;
    }
 }
 void ins(int pos,struct node*v)
 {
    struct node *q;
    q=(struct node *)malloc(sizeof(struct node));
    q->data=49;
    for(int i=1;i<pos-1;i++)
    {
        v=v->next;
    }
         q->next=v->next;
         v->next->prev=q;
         q->prev=v;
    v->next=q;
    

    printf("ok");
 }
 int main()
    {
        int a[5]={1,2,3,4,50};
        cr(a,5);
        ins(3,first);
        dis(first);
        return 0;
    }