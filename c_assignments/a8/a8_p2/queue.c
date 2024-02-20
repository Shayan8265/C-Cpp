/**
 * @file queue.c
 */

/*
CH-230-A
a8_p2.[c or cpp or h]
Shayan Khan
skhan01@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

static void copy_node(Item item, Node *pa);
static void copy_to_item(Node *pn, Item *pi);

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
	Node *elem=pq->front;
	if(queue_is_empty(pq))
		return -1;
	copy_to_item(pq->front, pitem);
	//if it only consists of one Node
	pq->front = pq->front->next;
	free(elem);
	if(pq->items == 1)
	{
		pq->rear = NULL;
	}

	//if last element is to be removed		
	pq->items--;

	return 0;
}



void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq)) {
        dequeue(&dummy, pq);
    }
}

static void copy_to_item(Node *pn, Item *pi)
{
    *pi = pn->item;
}
static void copy_node(Item item, Node *pa)
{
    pa->item = item;
}