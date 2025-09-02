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
    int InValue, SValue;
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
    printf("\nEnter value to insert in middle: ");
    scanf("%d", &InValue);
    printf("Enter value after which to insert (SValue): ");
    scanf("%d", &SValue);
    PTR = (struct node *)malloc(sizeof(struct node));
    PTR->value = InValue;
    PTR1 = h;
    do
    {
        if (PTR1->value == SValue)
            break;
        PTR1 = PTR1->next;
    }
    while (PTR1 != h);
    if (PTR1->value == SValue)
    {
        PTR->next = PTR1->next;
        PTR1->next = PTR;
    }
    else
    {
        printf("Value %d not found in the list.\n", SValue);
        free(PTR);
    }
    printf("\nList after inserting in middle:\n");
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

    return 0;
}

