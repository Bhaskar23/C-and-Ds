#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
typedef struct node NODE;
NODE* memalloc(int ele)
{
    NODE *new;
    new=(NODE*)malloc(sizeof(NODE));
    if(new==NULL)
    {
      printf("Memoryfull no allocation\n");
      exit(1);
    }
    new->data=ele;
    new->link=new;
    return new;
}
NODE* insert_front(int ele,NODE *head)
{
    NODE *temp,*cur;
    temp=memalloc(ele);
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    temp->link=head;
    cur=head;
    while(cur->link!=head)
    {
        cur=cur->link;
    }
    cur->link=temp;
    head=temp;
    return head;
}
NODE* insert_rare(int ele,NODE *head)
{
    NODE *temp,*cur;
    temp=memalloc(ele);
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    cur=head;
    while(cur->link!=head)
    {
        cur=cur->link;
    }
    cur->link=temp;
    temp->link=head;
    return head;
}
NODE* delete_front(NODE *head)
{
    NODE *temp=head,*second,*cur;
    if(head==NULL)
    {
        printf("List is empty\n");
        return head;
    }
    if(head->link==head)
    {
        free(head);
        head=NULL;
        return head;
    }
    second
}
NODE* delete_rare(NODE *head)
{
    NODE *prev,*cur;
    if(head==NULL)
    {
        printf("List is empty\n");
        return head;
    }
    if(head->link==head)
    {
        
    }
    
}