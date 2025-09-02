#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct note *next;
};
struct node*h,*p,*q;
int main()
{
    int invalue;
    h= NULL;
    q= NULL;
    for(;;)
    {
        printf("-99 to break\n");
        scanf("%d",&invalue);
        if(invalue==-99)
        {
            break;
        }
        p=(struct node *)malloc(sizeof(struct node));
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
    printf("orginal linked list\n");
    struct node*PTR=h;
    printf("output\n");
    while(PTR!=NULL)
    {
        printf("%d\n",PTR->value);
        PTR=PTR->next;
    }
     printf("enter a value to insert at last\n");
     scanf("%d",&invalue);
      struct node*PTR1=h;
       p=(struct node *)malloc(sizeof(struct node));
      p->value=invalue;
      p->next=NULL;
      PTR1=h;
     while (PTR1->next != NULL) {
            PTR1 = PTR1->next;
        }
        // Step 4: Link new node at the end
        PTR1->next = p;
    printf("final output is:\n");
    while(PTR!=NULL)
    {
        printf("%d\n",PTR->value);
        PTR=PTR->next;
    }

    return 0;
}


