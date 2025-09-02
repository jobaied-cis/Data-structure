#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node*next;
};
struct node *h=NULL,*p,*q;
int main()
{
    int inValue,choice;
    struct node*ptr,*ptr1;
    for(;;)
    {
        printf("-99 to break\n");
        scanf("%d",& inValue);
        if(inValue==-99)

        {
            break;
        }
        p=(struct node*)malloc(sizeof(struct node));
        p->value=inValue;
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
    }
    do
    {
        printf("%d", ptr->value);
        ptr=ptr->next;
    }
    while(ptr!=h);
    printf("\n");
    for(;;)
    {
        printf("do you want to insert at first\n");
        scanf("%d",&choice);
        if(choice==0)
            break;
        printf("insert first value\n");
        scanf("%d",&inValue);
        printf("insert first circular linked list\n");
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->value=inValue;
        ptr->next=h;
        ptr1=h;
        while(ptr1->next!=h)
        {
            ptr1=ptr1->next;
        }
        ptr1->next=ptr;
        h=ptr;
        printf("\n");
        printf("final linked list\n");
        if(h!=NULL)
        {
            ptr=h;
        }
        do
        {
            printf("%d", ptr->value);
            ptr=ptr->next;
        }
        while(ptr!=h);
    }
    printf("\n");
    return 0;
}

