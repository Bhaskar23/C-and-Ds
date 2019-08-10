#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *llink;
    struct node *rlink;
 
};
typedef struct node NODE;
NODE* memalloc(int ele)
{
    NODE *new;
    new=(NODE*)malloc(sizeof(NODE));
    if(new==NULL)
    {
        printf("Memory full no allocation\n");
        exit(1);
    }
    new->data=ele;
    new->llink=NULL;
    new->rlink=NULL;
    return new;
}
NODE *insert_front(int ele,NODE* head)
{
    NODE *temp;
    temp=memalloc(ele);
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    temp->rlink=head;
    head->llink=temp;
    head=temp;
    return head;
}
NODE *insert_rear(int ele,NODE* head)
{
    NODE *temp,*cur;
    temp=memalloc(ele);
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    cur=head;
    while(cur->rlink!=NULL)
    {
        cur=cur->rlink;
    }
    cur->rlink=temp;
    temp->llink=cur;
    return head;
}
NODE *delete_front(NODE *head)
{
    NODE *temp;
    if(head==NULL)
    {
        printf("List is empty\n");
        return head;
    }
    if(head->rlink==NULL)
    {
        free(head);
        head=NULL;
        return head;
    }
    temp=head;
    head=head->rlink;
    free(temp);
    head->llink=NULL;
    return head;
}
NODE *delete_rear(NODE *head)
{
    NODE *prev,*cur;
    if(head==NULL)
    {
        printf("List is empty\n");
        return head;
    }
    if(head->rlink==NULL)
    {
        free(head);
        head=NULL;
        return head;
    }
    cur=head;
    prev=NULL;
    while(cur->rlink!=NULL)
    {
        prev=cur;
        cur=cur->rlink;
    }
    free(cur);
    prev->rlink=NULL;
    return head;
}
void display(NODE *head)
{
    NODE *cur;
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    cur=head;
    printf("List elements are:\n");
    while(cur!=NULL)
    {
        printf("%d\n",cur->data);
        cur=cur->rlink;
    }
}
int main()
{
    NODE *head=NULL;
    int ch,ele,cont=0;
    do
    {
       printf("Enter your choice:\n");
      printf("1.INSERT FRONT\t2.INSERT REAR\t3.DELETE FRONT\t4.DELETE REAR\t5.DISPLAY\n");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:
                  printf("Enter Element for inserting:\n");
                  scanf("%d",&ele);
                  head=insert_front(ele,head);
                  break;
          case 2:
                  printf("Enter Element for inserting:\n");
                  scanf("%d",&ele);
                  head=insert_rear(ele,head);
                  break;
          case 3:
                  head=delete_front(head);
                  break;
          case 4:
                  head=delete_rear(head);
                  break;
           case 5: display(head);
                    break;
         default:printf("wrong choice entered\n");
      }
      printf("press 1 to continue and 0 to exit\n");
      scanf("%d",&cont);
    } while (cont!=0);
    return 0;
    

}