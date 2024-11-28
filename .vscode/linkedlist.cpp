#include<iostream>
using namespace std;
class node {

    public:
    int x;
    node *next;
    node(int y){
        this->next=NULL;
        x=y;

    }
};
void dis(node *s)
{
    while(s)
    {
        cout<<s->x;
        s=s->next;
    }
}
    merge( node *p , int pos)
    {
        node* st=new node(9) ;
        for(int i=1;i<pos-1;i++)
        {
          st=st->next;
          
        }
        st->next=p->next;
        p->next=st;
    }
    void middle(node * head){
    node *slow;
    node* fast;
    slow=head;
    fast=head;
    while(fast->next!=NULL &&fast->next!=NULL) 
    {
    slow=slow->next;
    fast=fast->next->next;
    
    }  cout<<slow->x;
    }
int main()
{
    node* head=new node(1);
    node* first=new node(2);
    head->next = first;
    node* second=new node(4);
    first->next=second;
    // merge(head,2);
    middle(head);
    dis(head);
    return 0;


}

