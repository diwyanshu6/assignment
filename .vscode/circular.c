void ins ( struct node *p) 
{
    while(p->next!=NULL){
        p=p->next;
    }
    struct node *t;
 
   t =(struct node*)malloc(sizeof(struct node));
    t->next=head;
    t->data=4;
   t=head;
   p->next=head;
  return;
}

