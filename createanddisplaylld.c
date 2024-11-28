#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *next;
};
 void transverse(struct node* head){
    while(head->next!=NULL){
        printf("Element:%d\n",head->data);
        head=head->next;
    }
 }
        

    int main(){
        struct node *head;
        struct node *first;
    struct node *second;
    struct node *third;

    head =(struct node*)malloc(sizeof(struct node));
        first =(struct node*)malloc(sizeof(struct node));
    second =(struct node*)malloc(sizeof(struct node));
    third =(struct node*)malloc(sizeof(struct node));

head ->data=0;
head->next=first;
    first->data=1;
    first->next = second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    transverse(head);

    }

