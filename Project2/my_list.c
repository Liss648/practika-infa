#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // Для strlen

#include <locale.h>
//#include "holodil.h"
#include "my_list.h"


struct Item* InsertToStart(holodil* h, struct Item* head)
{
    struct Item* newItem = (struct Item*)malloc(sizeof(struct Item));
    newItem->h = h;
    newItem->next = head;
    return newItem;
}


struct Item* deleteFromStart(struct Item* head) {
    struct Item* item = head;
    if (item != NULL) {
        head = head->next;
        free(item->h);
        free(item);
    }
    return head;
}



void printList(struct Item* head) {
    for (struct Item* item = head; item != NULL; item = item->next) {
        Print((item->h));
        printf("\n");
    }
    printf("\n");
}

struct Item* InsertSort(holodil* h, struct Item* head) {
    struct Item* item = (struct Item*)malloc(sizeof(struct Item));
    item->h = h;
    item->next = NULL;
    struct Item* tmp = head;
    if (head == NULL) return item;
    if (h->price < head->h->price) {
        item->next = head;
        return item;
    }
    while (tmp->next != NULL) {
        if (h->price < tmp->next->h->price) {
            item->next = tmp->next;
            tmp->next = item;
            break;
        }
        else tmp = tmp->next;
    }
    tmp->next = item;
    return head;
}




struct Item* Delete_Number(struct Item* head, int n)
{
    struct Item* tmp = head, * t;
    int i = 1;
    if (n == 1)
    {
        t = head;
        head = head->next;
        free(t->h);
        free(t);
        return head;
    }
    while (tmp->next != NULL)
    {
        if (n == i + 1)
        {
            t = tmp->next;
            tmp->next = tmp->next->next;
            free(t->h);
            free(t);
            return head;
        }
        else
        {
            i++;
            tmp = tmp->next;
        }
    }
    return head;
}

void freeList(struct Item* head) {
    struct Item* tmp = head;
    struct Item* next;
    while (tmp != NULL) {
        next = tmp->next;
        free(tmp->h);
        free(tmp);
        tmp = next;
    }
}