/*
CH-230-A
a7_p1.[c or cpp or h]
Shayan Khan
skhan01@jacobs-university.de
*/
// in this file we declared functions
// so during compilation of all files
// the functions could be called
// we also inlcuded the header file
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
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

void dispose_list(struct Node *node)
{
    struct Node *del;
    while (node != NULL)
    {
        del = node->next;
        free(node);
        node = del;
    }
    if (node != NULL)
    {
        printf("list not disposed properly\n");
    }
}