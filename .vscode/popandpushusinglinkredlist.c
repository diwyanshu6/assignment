#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;

}*top;

void push( int x)
{
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    t->next=top;
    top=t;

}
void pop()
{ int x;
     struct node *t;
     t=top;
     top=top->next;
     x=t->data;

}
dis( )
{
    struct node *p;
    p=top;
while(p!=NULL)
{
    printf("%d",p->data);
    p=p->next;
    

}}
int main()
{
    push(5);
    push(6);
    pop();
    dis();
    return 0;

}