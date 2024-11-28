#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    int *s;
};
 void cr(struct stack * st)
{
    printf("enter the size ");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int*)malloc(st->size*sizeof(int));

}
void push(struct stack*st,int x)
{
    if (st->top==st->size-1)
    {
        printf("stack is over flow");
    }
    else
    {
        st->top++;
        st->s[st->top]=x;

    }
}
 int pop (struct stack *st)
 {
    int x=-1;
    if(st->top==-1)
    {
        printf("uenderflow");}
      else  {
x=st->s[st->top--];
printf("d ");
}
return x;
    }
 
 void dis(struct stack st)
 {
    for(int i=st.top;i>=0;i--)
    {
        printf("%d  ",st.s[i]);
    }
 }
int main ()
{
    struct stack s;
    cr(&s);
    push(&s,10);
    push(&s,1);
    push(&s,1003);
   
   pop(&s);
   dis(s);
   return 0;
}