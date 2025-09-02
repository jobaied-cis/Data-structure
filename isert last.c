#include <stdio.h>
#include <stdlib.h>
struct node {
    int value;
    struct node *next;
 };
struct node *h, *p, *q;
int main() {
    int InValue;
    struct node *PTR, *PTR1;
    h = NULL;
    q = NULL;
    for (;;) {
        printf("-99 to break\n");
        scanf("%d", &InValue);
        if (InValue == -99) {
            break;
        }

        p = (struct node *)malloc(sizeof(struct node));
        p->value = InValue;
        p->next = NULL;
        if (h == NULL) {
            h = p;
            q = p;
        } else {
            q->next = p;
            q = p;
        }
    }
    printf("Original List:\n");
    PTR = h;
    while (PTR != NULL) {
        printf("%d ", PTR->value);
        PTR = PTR->next;
    }
    printf("\n");
    printf("Enter value to insert at last: ");
    scanf("%d", &InValue);
    p = (struct node *)malloc(sizeof(struct node));
    p->value = InValue;
    p->next = NULL;

        PTR1 = h;
        while (PTR1->next != NULL) {
            PTR1 = PTR1->next;
        }
        PTR1->next = p;
    printf("List after inserting at last:\n");
    PTR = h;
    while (PTR != NULL) {
        printf("%d ", PTR->value);
        PTR = PTR->next;
    }
    printf("\n");

    return 0;
}

