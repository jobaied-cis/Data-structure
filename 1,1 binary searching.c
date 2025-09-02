#include<stdio.h>
#include<stdlib.h>
struct node{
int value;
struct node*next;
};
struct node *h=NULL,*p,*q;
int main()
{
    int invalue,choice;
    struct node *ptr,*ptr1;
    for(;;)
    {
        printf("-99 to break:\n");
        scanf("%d",&invalue);
        if(invalue==-99)
        {
            break;
        }
        p=(struct node*)malloc(sizeof(struct node));
        p->value=invalue;
        if(h==NULL)
        {
            h=p;
            p->next=h;
            q=p;
        }
        else
        {
            q->next=p;
            p->next=h;
            q=p;
        }
    }
    printf("orginal linked list\n");
    if(h!=NULL)
    {
        ptr=h;
        do {
            printf("%d",ptr->value);
            ptr= ptr->next;
        }while(ptr!=h);
    }
    for(;;)
    {
        printf("do you insert \n");
        scanf("%d",&choise);
        if(choice==0)break;
    printf("enter value to insert\n");
    scanf("%d",&invalue);
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->value=invalue;
    ptr->next=h;
    ptr1=h;
    while(ptr1->next!=h)
    {
        ptr1=ptr1->next;
    }
    ptr1->next=ptr;
    h=ptr;
    printf("final linked list\n");
    if(h!=NULL)
    {
        ptr=h;
        do {
            printf("%d",ptr->value);
            ptr=ptr->next;
        }while(ptr!=h);
    }
    }
    return 0;
}
