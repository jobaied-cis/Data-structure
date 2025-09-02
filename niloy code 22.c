CODE: Linked List:
// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

 struct Node{
        int data;
        struct Node * next;
};
void insertNewValue(int value);
void DeleteAValue(int value);
void DisplayLinkedList();
struct Node* head=NULL;

int main() {
    int choice, value;
    // Write C code here
    while(1){
       printf("Select an option:\n");
       printf("1:Insert\n");
       printf("2:Delete\n");
       printf("3:Display\n");
       printf("4:Exit\n");
       scanf("%d",&choice);

       switch (choice){
           case 1:
             printf(" Enter Value to Insert\n");
             scanf("%d", &value);
             insertNewValue(value);
             break;
           case 2:
             printf(" Enter Value to Delete\n");
             scanf("%d", &value);
             DeleteAValue(value);
             break;
          case 3:
             DisplayLinkedList();
             break;
          case 4:
             exit(0);
             break;
           default:
            printf("you enter a wrong choice.");
       }

    }

          return 0;
}

 void insertNewValue(int value){
      struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
      newNode->data=value;
      newNode->next=NULL;
      if(head==NULL)
      {
          head=newNode;

      }
      else{
          struct Node* temp=head;
          while(temp->next!=NULL){
              temp= temp->next;

          }
          temp->next=newNode;
      }
       printf("Successfully Inserted the Value %d \n",value);
  }
   void DeleteAValue(int value){


  }
   void DisplayLinkedList(){
      struct Node* temp=head;
      if(temp==NULL){
          printf("List is Empty");
      }
       while(temp !=NULL){
            printf("%d ->\n", temp->data);
            temp= temp->next;

          }

  }
