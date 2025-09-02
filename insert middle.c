#include <stdio.h>
#include <stdlib.h>
// Node structure
struct node
{
    int value;
    struct node *next;
};
struct node *h, *p, *q;
int main()
{
    int InValue, Svalue;
    struct node *PTR, *PTR1;
    h = NULL;
    q = NULL;
    for (;;)
    {
        printf("-99 to break\n");
        scanf("%d", &InValue);
        if (InValue == -99)
        {
            break;
        }
        p = (struct node *)malloc(sizeof(struct node));
        p->value = InValue;
        p->next = NULL;
        if (h == NULL)
        {
            h = p;
            q = p;
        }
        else
        {
            q->next = p;
            q = p;
        }
    }
    printf("Original List:\n");
    PTR = h;
    while (PTR != NULL)
    {
        printf("%d ", PTR->value);
        PTR = PTR->next;
    }
    printf("\n");
    printf("Enter value to insert: ");
    scanf("%d", &InValue);
    printf("Enter value after which to insert: ");
    scanf("%d", &Svalue);
    p = (struct node *)malloc(sizeof(struct node));
    p->value = InValue;
    PTR1 = h;
    while (PTR1->value != Svalue)
    {
        PTR1 = PTR1->next;
    }

        p->next = PTR1->next;
        PTR1->next = p;

    printf("Updated List:\n");
    PTR = h;
    while (PTR != NULL)
    {
        printf("%d ", PTR->value);
        PTR = PTR->next;
    }
    printf("\n");

    return 0;
}

