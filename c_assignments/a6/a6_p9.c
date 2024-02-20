/*CH-230-A
a6_p9.[c or cpp or h]
Shayan Khan
skhan01@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list{
    int info;
    struct list *next;
};

struct list* push_back(struct list* my_list, int value){
    struct list *newel, *cursor;
    cursor = my_list;
    newel = (struct list *)malloc(sizeof(struct list));
    if(newel == NULL){
        printf("error in memory allocation for push_back\n");
        return my_list;
    }
    newel->info = value;
    newel->next = NULL;
    if(my_list == NULL){
        return newel;
    }
    while(cursor->next != NULL){
        cursor = cursor->next;
    }
    cursor->next = newel;
    return my_list; 
}

struct list* push_front(struct list* my_list, int value){
    struct list *newel;
    newel = (struct list *)malloc(sizeof(struct list));
    if(newel == NULL){
        printf("error in memory allocation of push_front\n");
        return my_list;
    }
    newel->info = value;
    newel->next = my_list;
    return newel;
}

struct list* delete_elem(struct list* my_list){
    struct list *temp, *temp2;
    temp = my_list;
    if(my_list == NULL){
        return my_list;
    }
    temp2 = temp->next;
    free(temp);
    return temp2;
}

struct list* push_mid(struct list* my_list, int value, int pos){

}

struct list* reverse_list(struct list* my_list){

}

void print_list(struct list *my_list){
    struct list *p;
    for(p = my_list; p; p = p->next){
        printf("%d ", p->info);
    }
    printf("\n");
    return;
}

void dispose_list(struct list* my_list){
    struct list *del;
    struct list a;
    while(my_list != NULL){
        del = my_list->next;
        free(my_list);
        my_list = del;
    }
    if(my_list != NULL){
        printf("list not disposed properly\n");
    }
    return;
}

int main(){
    struct list *my_list;
    my_list = NULL;
    char in;
    int x = 1, value;
    while(x){
        scanf("%c", &in);
        switch(in){
        case 'a':
            scanf("%d", &value);
            my_list = push_back(my_list, value);
            break;
        case 'b':
            scanf("%d", &value);
            my_list = push_front(my_list, value);
            break;
        case 'r':
            my_list = delete_elem(my_list);
            break;
        case 'i':
            scanf("%d", y);
            scanf("%d", value);
            my_list = push_mid(my_list, value, y);
            break;
        case 'R':
            my_list = reverse_list(my_list);
            break;
        case 'p':
            print_list(my_list);
            break;
        case 'q':
            dispose_list(my_list);
            x = 0;
            break;
        }
    }
    return 0;
}