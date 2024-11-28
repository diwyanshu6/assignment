#include<stdio.h>
#include<stdlib.h>
struct node

{ 
    int data;
    struct node * r;
     struct node * l;
};
struct node * create()
{
   struct node*new;
    new =(struct node*) malloc(sizeof(struct node));
     int x;
     scanf("%d",&x);
     new->data=x;
     new->l= NULL;
     new->r= NULL;
     if(x==-1)
     {
        return 0;
     }
     else
     {
       printf("enter the left child of %d",x);
       new->l=create();
        printf("enter the right child of %d",x);
        new->r=create();
        return new;
     }}
     int main() 
     {
     struct node *root;
     root=NULL;
     root=create();
     return 0;
     }





