#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next;
};
struct node *h = NULL, *p, *q;
int main()
{
    int InValue,choice;
    struct node *PTR, *PTR1;
    for (;;)
    {
        printf("Enter value (-99 to stop): ");
        scanf("%d", &InValue);
        if (InValue == -99) break;
        p = (struct node *)malloc(sizeof(struct node));
        p->value = InValue;
        if (h == NULL)
        {
            h = p;
            p->next = h;
            q = p;
        }
        else
        {
            q->next = p;

            p->next = h;
            q = p;
        }
    }
    printf("\nOriginal Circular List:\n");
    if (h != NULL)
    {
        PTR = h;
        do
        {
            printf("%d ", PTR->value);
            PTR = PTR->next;
        }
        while (PTR != h);
    }
    printf("\n");
    for(;;)
    {
        printf("\ndo you want to insert at first\n");
        scanf("%d",&choice);
        if(choice==0)
            break;
    printf("\nEnter value to insert at last: ");
    scanf("%d", &InValue);
    PTR = (struct node *)malloc(sizeof(struct node));
    PTR->value = InValue;
    PTR->next = h;
    PTR1 = h;
    while (PTR1->next != h)
    {
        PTR1 = PTR1->next;
    }
    PTR1->next = PTR;
    printf("\nList after inserting at last:\n");

    if (h != NULL)
    {
        PTR = h;
        do
        {
            printf("%d ", PTR->value);
            PTR = PTR->next;
        }
        while (PTR != h);
    }

    }
    printf("\n");
    return 0;
}
