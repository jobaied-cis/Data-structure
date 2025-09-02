#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node* next;
};
struct node *h,*p,*q;
int main()
{
    int intvalue,i,position;
    struct node *ptr,*head1,*head2;
    h=Null;
    q=Null;
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
        p->next=Null;
        if(h==Null)
        {
            h=p;
            q=p;
            else
                q->Null=p;
            q=p;
        }
    }
        printf("orginal linked list\n");
        ptr=h;
        while(ptr!=null){
            printf("%d",ptr->value);
        ptr=ptr->next;
        }
        printf("\n");
        printf("insert position\n");
        scanf("%d",&position);
         printf("\n");
         printf("split operation\n");
         head1=h;
         head2=null;
         i=1;
         ptr=h;
         while(i!=position)
         {
           i++;
           ptr=ptr->next;
         }
    head2=ptr->next;
    ptr=ptr->next;
    printf("insert first linked list\n");
    ptr=head1;
    while(ptr!=null)
    {
        printf("%d",ptr->value);
        ptr=ptr->next;
    }
     printf("insert 2nd linked list\n");
    ptr=head2;
    while(ptr!=null)
    {
        printf("%d",ptr->value);
        ptr=ptr->next;
    }
}
