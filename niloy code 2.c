#include <stdio.h>

#define MAX 100

int patientID[MAX];
int patientPriority[MAX];
int front = -1;
int rear = -1;

int main() {
    int choice;
    int id, priority;

    printf("=== Welcome to Smart Hospital Queue System ===\n");

    while (1) {

        printf("\n Please choose an option: \n");
        printf("1. Add a patient to the queue\n");
        printf("2. Serve the next patient\n");
        printf("3. Show current queue\n");
        printf("4. Exit system\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Add patient
            if (rear == MAX - 1) {
                printf("Sorry, the queue is full. Cannot add more patients.\n");
            } else {
                printf("Enter Patient ID: ");
                scanf("%d", &id);

                printf("Enter Priority (1 = Emergency, 2 = Regular, 3 = General): ");
                scanf("%d", &priority);

                if (priority < 1 || priority > 3) {
                    printf("Invalid priority! Please enter 1, 2, or 3.\n");
                } else {
                    rear = rear + 1;
                    patientID[rear] = id;
                    patientPriority[rear] = priority;

                    if (front == -1) {
                        front = 0; // First patient
                    }

                    printf("Patient %d added to the queue with priority %d.\n", id, priority);
                }
            }

        } else if (choice == 2) {
            // Serve next patient
            if (front == -1 || front > rear) {
                printf("The queue is empty. No patients to serve.\n");
            } else {
                // Find patient with highest priority (lowest number)
                int highestPriorityIndex = front;
                for (int i = front; i <= rear; i = i + 1) {
                    if (patientPriority[i] < patientPriority[highestPriorityIndex]) {
                        highestPriorityIndex = i;
                    }
                }

                printf("Now serving Patient %d with priority %d.\n",
                       patientID[highestPriorityIndex], patientPriority[highestPriorityIndex]);

                // Remove patient from queue by shifting everyone
                for (int i = highestPriorityIndex; i < rear; i = i + 1) {
                    patientID[i] = patientID[i + 1];
                    patientPriority[i] = patientPriority[i + 1];
                }
                rear = rear - 1;

                if (rear < front) {
                    front = -1;
                    rear = -1;
                }
            }

        } else if (choice == 3) {
            // Display queue
            if (front == -1 || front > rear) {
                printf("The queue is empty. No patients waiting.\n");
            } else {
                printf("\nCurrent patients in the queue:\n");
                for (int i = front; i <= rear; i = i + 1) {
                    printf("Patient %d - Priority %d\n", patientID[i], patientPriority[i]);
                }
            }

        } else if (choice == 4) {
            // Exit program
            printf("Thank you for using the Hospital Queue System. Goodbye!\n");
            break;

        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
