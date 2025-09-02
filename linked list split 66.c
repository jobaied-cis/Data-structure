#include <stdio.h>
#include <stdlib.h>
// Node structure
struct node {
int value;
struct node *next;
};
struct node *h, *p, *q;
int main() {
int InValue, Position, i;
struct node *PTR, *Head1, *Head2;
h = NULL;
q = NULL;
// Step 1: Create linked list from user input
for (;;) {
printf("-99 to break\n");
scanf("%d", &InValue);

if (InValue == -99) {
break;
}
// Create new node
p = (struct node *)malloc(sizeof(struct node));
// Assign value
p->value = InValue;
p->next = NULL;
// Insert into list
if (h == NULL) {
h = p;
q = p;
} else {
q->next = p;
q = p;
}
}
// Display original list
printf("Original List:\n");
PTR = h;
while (PTR != NULL) {
printf("%d ", PTR->value);
PTR = PTR->next;
}
printf("\n");
// Step 2: Input position for split
printf("Enter position to split: ");
scanf("%d", &Position);

// Step 3: Split operation
Head1 = h;      // First list starts at head
Head2 = NULL;   // Second list empty initially
i = 1;
PTR = h;
while (i != Position && PTR != NULL) {
i++;
PTR = PTR->next;
}
if (PTR != NULL) {
Head2 = PTR->next;   // Second list starts here
PTR->next = NULL;    // End first list
}
// Step 4: Display both lists
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
return 0;
}

