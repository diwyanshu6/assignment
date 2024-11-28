#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;
void enque(int x)
{
    struct node *t;
    t =(struct node*)malloc(sizeof(struct node));
    t->data=x;
    rear->next =t;
    rear =t;
    rear->next =front;
}