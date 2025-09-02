#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node*next;
};
struct node *h=NULL,*p,*q=NULL;
int main()
{
    int invalue,i,pos;
    struct node *ptr,*head1,*head2;
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
    printf("\n");
    printf("orginal linked list:\n");
    ptr=h;
    while(ptr!=NULL)
    {
        printf("%d", ptr->value);
        ptr=ptr->next;
    }
    printf("possition to insert\n:");
    scanf("%d",&pos);
    head1=h;
    head2=NULL;
    i=1;
    ptr=h;
    while(i!=pos && ptr!=NULL)
    {
        i++;
        ptr=ptr->next;
    }
    if(ptr!=NULL)
    {
        head2=ptr->next;
        ptr->next=NULL;

    }
    printf("\nfirst linked list:\n");
    ptr=head1;
    while(ptr!=NULL)
    {
        printf("%d", ptr->value);
        ptr=ptr->next;
    }
    printf("\nsecond linked list:\n");
    ptr=head2;
    while(ptr!=NULL)
    {
        printf("%d", ptr->value);
        ptr=ptr->next;
    }
    return 0;

}
