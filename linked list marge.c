#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *h, *p, *q = NULL;

int main() {
    int InValue;
    struct node *Head1 = NULL, *Head2 = NULL, *PTR;
    printf("Create First List:\n");
    for (;;) {
        printf("Enter value (-99 to break): ");
        scanf("%d", &InValue);
        if (InValue == -99) {
            break;
        }
        p = (struct node *)malloc(sizeof(struct node));
        p->value = InValue;
        p->next = NULL;
        if (Head1 == NULL) {
            Head1 = p;
            q = p;
        } else {
            q->next = p;
            q = p;
        }
    }
    printf("Create Second List:\n");
    for (;;) {
        printf("Enter value (-99 to break): ");
        scanf("%d", &InValue);
        if (InValue == -99) {
            break;
        }
        p = (struct node *)malloc(sizeof(struct node));
        p->value = InValue;
        p->next = NULL;
        if (Head2 == NULL) {
            Head2 = p;
            q = p;
        } else {
            q->next = p;
            q = p;
        }
    }
    printf("First List:\n");
    PTR = Head1;
    while (PTR != NULL) {
        printf("%d ", PTR->value);
        PTR = PTR->next;
    }
    printf("\n");
    printf("Second List:\n");
    PTR = Head2;
    while (PTR != NULL) {
        printf("%d ", PTR->value);
        PTR = PTR->next;
    }
    printf("\n");
    h = Head1;
    PTR = h;
    while (PTR->next != NULL) {
        PTR = PTR->next;
    }
    PTR->next = Head2;
    printf("Merged List:\n");
    PTR = h;
    while (PTR != NULL) {
        printf("%d ", PTR->value);
        PTR = PTR->next;
    }
    printf("\n");

    return 0;
}
