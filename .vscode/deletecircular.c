#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node*next ;

}*first;
 void cr(int a[],int n)
 {
    struct node *t,*last;
    first =(struct node *)malloc(sizeof(struct node));
    first->data=a[0];
    first=last;
    for(int i=1;i<n;i++)
    {
       t =(struct node *)malloc(sizeof(struct node));
       t->data=a[i];
       last->next=t;
       t=last;
    }
 }
 dis()