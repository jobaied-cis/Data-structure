#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node* next;
};

void search(struct Node* head, int Svalue) {
    struct Node* ptr = head;
    int value_found = 0;

    // Traverse the linked list
    while (ptr != NULL && value_found != 1) {
        if (ptr->data == Svalue) {
            value_found = 1;
        } else {
            ptr = ptr->next;
        }
    }

    // Check result
    if (value_found == 1) {
        printf("Value %d found in the linked list.\n", Svalue);
    } else {
        printf("Value %d not found in the linked list.\n", Svalue);
    }
}

int main() {
    // Create a simple linked list: 10 -> 20 -> 30
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Search for value 20
    search(head, 20);

    // Try searching for value not in list
    search(head, 99);

    return 0;
}

