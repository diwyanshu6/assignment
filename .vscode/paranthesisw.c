#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *next;

}*top=NULL;
void push(char x)
{
    struct node t;
    t=(struct node*)malloc(sizeof (struct node));
    t=top;
    top=top->next;
   x=t->data;
}