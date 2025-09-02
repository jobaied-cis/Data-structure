#include <stdio.h>
#include <stdlib.h>
struct node
{
    int value;
    struct node *next;
};
struct node *h= NULL,*p,*q=NULL;
int main()
{
    int InValue, Position, i;
    struct node *PTR, *Head1, *Head2;
    for (;;)
    {
        printf("-99 to break\n");
        scanf("%d", &InValue);

        if (InValue == -99)
        {
            break;
        }

        p = (struct node *)malloc(sizeof(struct node));
// Assign value
            p->value = InValue;
        p->next = NULL;
// Insert into list
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
    printf("Enter position to split: ");
    scanf("%d", &Position);

    Head1 = h;
    Head2 = NULL;
    i = 1;
    PTR = h;
    while (i != Position && PTR != NULL)
    {
        i++;
        PTR = PTR->next;
    }
    if (PTR != NULL)
    {
        Head2 = PTR->next;
        PTR->next = NULL;
    }
    printf("First List:\n");
    PTR = Head1;
    while (PTR != NULL)
    {
        printf("%d ", PTR->value);
        PTR = PTR->next;
    }
    printf("\n");
    printf("Second List:\n");
    PTR = Head2;
    while (PTR != NULL)
    {
        printf("%d ", PTR->value);
        PTR = PTR->next;
    }
    printf("\n");
    return 0;
}

