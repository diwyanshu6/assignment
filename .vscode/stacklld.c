#include<stdio.h>
#include<stdlib.h>
struct node 
{
    char data;
    struct node* next;
}*top =NULL;
 void push(char x)
{
    int i=0;
    struct node*t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=x;
    t->next =top;
    top=t;

}
int pop()
{
    int q;
    struct node*p;
    p=top;
    top=top->next;
   q= p->data;
   return q;
    //free(q);
}
int isbalanced(char*exp)
{   
    
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        {
            push(exp[i]);
        }
        else if( exp[i]==')')
        {
            if(top==NULL) 
            return 0;

            pop();

        }
        
        
        
        
    
    }
    if(top==NULL)
        {
            return 1;}
            else return 0;
    
}

// void dis()
// {
//     struct node *q;
//     q=top;
//     while(q->data!=\0)
//     {
//         printf("%d",q->data);
//     }

// } 
int main()
{
    char *exp="(((a+b))*((a-b)))";
printf("%d", isbalanced(exp));
return 0;
}