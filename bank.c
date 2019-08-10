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
        printf("Memoryfull No allocation\n");
        exit(1);
    }
    new->data=ele;
    new->link=NULL;
    return new;
}
NODE* insertfront(int ele,NODE *head)
{
    NODE *temp;
    temp=memalloc(ele);
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    temp->link=head;
    head=temp;
    return head;
}
NODE* insertrear(int ele,NODE *head)
{
    NODE *temp,*cur;
    temp=memalloc(ele);
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    cur=head;
    while (cur->link!=NULL)
        cur=cur->link;
         cur->link=temp;
    return head;
}
NODE* deletefront(NODE *head)
{
    NODE *temp;
    if(head==NULL)
    {
        printf("List is empty\n");
        return head;
    }
    if(head->link==NULL)
    {
        free(head);
        head=NULL;
        return head;
    }
    temp=head;
    head=head->link;
    free(temp);
    return head;
}
NODE* deleterear(NODE*head)
{
    NODE *cur,*prev;
    if(head==NULL)
    {
        printf("List is empty\n");
        return head;
    }
    if(head->link==NULL)
    {
        free(head);
        head=NULL;
        return head;
    }
    cur=head;
    prev=NULL;
    while(cur->link!=NULL)
    {
        prev=cur;
        cur=cur->link;
    }
    free(cur);
    prev->link=NULL;
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
    while (cur!=NULL)
    {
        printf("%d\t",cur->data);
        cur=cur->link;
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
                  head=insertfront(ele,head);
                  break;
          case 2:
                  printf("Enter Element for inserting:\n");
                  scanf("%d",&ele);
                  head=insertrear(ele,head);
                  break;
          case 3:
                  head=deletefront(head);
                  break;
          case 4:
                  head=deleterear(head);
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

