#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *next;
};
struct node *h,*p,*q;
int main()
{
    int invalue,svalue;
    struct node *ptr1;
    h=NULL;
    q=NULL;
    for(;;)
    {
        printf("-99 to break\n");
        scanf("%d",&invalue);
        if(invalue==-99)
        {
            break;
        }
        p=(struct node*)malloc(sizeof(struct node));
        p->value=invalue;
        p->next=NULL;
        if(h==NULL)
        {
            h=p;
            q=p;
        }
        else
        {
            q->next=p;
            q=p;
        }
    }
    struct node *ptr=h;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    pritf("\n");
    printf("Enter insert value\n");
    scanf("%d",&invalue);
      printf("Enter insert search value\n");
    scanf("%d",&svalue);
    p=(struct node*)malloc(sizeof(struct node));
    p->value=invalue;
    ptr1=h;
    while(ptr1->value!=svalue);
    {
        ptr1=ptr1->next;
    }
    p->next=ptr1->next;
    ptr1->next=p;
    printf("final output\n");
    ptr=h;
    printf("linked list after insertion\n");
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->value);
        ptr=ptr->next;
    }
    return 0;

}

