#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node *prev;
    int data ;
    struct node *next;

}*first=NULL;
void cr(int a[],int n )
{
    strcut node *last , *t;
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
    last=t;
    
    
    
}
}
 void dis(struct node *p)
 {
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->next;
    }
 }
 int main()
    {
        int a[5]={1,2,3,4,50};
        cr(a,5);
        dis(first);
        return 0;
    }