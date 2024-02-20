/*
CH-230-A
a7_p1.[c or cpp or h]
Shayan Khan
skhan01@jacobs-university.de
*/
// header file
// we only declare any structure or a function
// to be used later in main file
struct Node{
    int item; 
    struct Node* next; 
};
void insertAtBeginning(struct Node** ref,int data);

void insertAtEnd(struct Node** ref,int data);

struct Node* deleteNode(struct Node** ref);

void printList(struct Node* node);

void dispose_list(struct Node *node);