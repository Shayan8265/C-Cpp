/*
CH-230-A
a7_p1.[c or cpp or h]
Shayan Khan
skhan01@jacobs-university.de
*/
// this is the main file
// where all the libraries are included
// to carry out the main function
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
int main()
{
    struct Node *head = NULL;
    int flag = 1;
    char option;
    int value = 0;
    while (flag)
    {
        scanf("%c", &option);
        switch (option)
        {
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
            flag = 0;
            break;
        }
    }
    return 0;
}