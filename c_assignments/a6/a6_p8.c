/*CH-230-A
a6_p8.[c or cpp or h]
Shayan Khan
skhan01@jacobs-university.de
*/
/* fistly we intorduced the structure node to 
create a platform for all the int to be stored 
and create a pointer for the linked list
we then creat 4 different functions for inserting 
at the beginning, end, print aswell as deleting.
for adding at beginning we just allocate 
a memory for a pointer and insert the value 
which then pointed to next and ref then pointed 
to new_node to relink the head(ref)
in the end function we did the same but 
pointed the new value as the existing value
and the existing value to the head and repeat the process
with while loop until it becomes null
for deleting we just point a new temp2 to the next value
and free the previous pointer pointing to head 
this way it deletes the first element
for printing we just print the fiirst element 
and then point node to the next element and print again
in the main function we just use the switch statements
and pass the required peremeters with each individual 
case
*/
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int item; 
    struct Node* next; 
};
void insertAtBeginning(struct Node** ref,int data){
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL){
        printf("Memory was not allocated properly.");
        exit(1);
    }
    new_node->item = data;
    new_node->next = *ref;
    *ref = new_node;
    return;
}
void insertAtEnd(struct Node** ref,int data){
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL){
        printf("Memory was not allocated properly.");
        exit(1);
    }
    struct Node* last=*ref;
    new_node->item = data;
    new_node->next = NULL;
    if(*ref == NULL){
        *ref = new_node;
        return;
    }
    while(last->next != NULL){
        last = last->next;
    }
    last->next=new_node;
    return;
}
struct Node* deleteNode(struct Node** ref) {
    struct Node *temp = *ref;
    if (*ref == NULL){
        return *ref;
    }
    struct Node *temp2 = temp->next;
    free(temp);
    return temp2;
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->item);
        node = node->next;
    }
    printf("\n");
}

void dispose_list(struct Node* node){
    struct Node *del;
    while(node != NULL){
        del = node->next;
        free(node);
        node = del;
    }
    if(node != NULL){
        printf("list not disposed properly\n");
    }
}

int main() {
    struct Node* head = NULL;
    int flag = 1;
    char option;
    int value = 0;
    while(flag){
        scanf("%c", &option);
        switch(option){
            case 'a':
                scanf("%d", &value);
                insertAtEnd(&head, value);
                break;
            case 'b':
                scanf("%d", &value);
                insertAtBeginning(&head, value);
                break;
            case 'r':
                head = deleteNode(&head);
                break;
            case 'p':
                printList(head);
                break;
            case 'q':
                dispose_list(head);
                flag=0;
                break;
        }
    }
return 0;
}
