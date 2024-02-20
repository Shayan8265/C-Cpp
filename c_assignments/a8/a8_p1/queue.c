/**
 * @file queue.c
 */

/*
CH-230-A
a8_p1.[c or cpp or h]
Shayan Khan
skhan01@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

static void copy_node(Item item, Node *pa);

void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
    return pq->items;
}

int enqueue(Item item, Queue *pq)
{
    // add missing stuff
    // ok

    if (queue_is_full(pq))
        return -1;
    Node *a = (Node *)malloc(sizeof(Node));
    if (!a)
        return -1;

    copy_node(item, a);
    a->next = NULL;
    if (queue_is_empty(pq))
    {

        pq->front = a;
    }
    else
    {

        pq->rear->next = a;
    }
    pq->rear = a;
    pq->items++;
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    // add missing stuff
    // no, I dont think I will. lol
    return 0;
}

/*
void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq)) {
        dequeue(&dummy, pq);
    }
}
*/

static void copy_node(Item item, Node *pa)
{
    pa->item = item;
}

/*
    In the enqueue function I first checked if the
    queue was full. Then created a new node a.
    Then allocated the memory. Then copied the item
    to the node. Then set the next pointer to null.
    Then set the front node if queue was empty.
    In the else condition set current rear node's
    next pointer to new node if queue already exist.
    Then set the rear pointer to new node. THen did
    the increment of item count


*/