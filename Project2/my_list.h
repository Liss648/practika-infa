#pragma once
#include "holodil.h"
struct Item {
    holodil* h;
    struct Item* next;
};
struct Item* deleteFromStart(struct Item* head);
void printList(struct Item* head);
struct Item* InsertSort(holodil* h, struct Item* head);
struct Item* Delete_Number(struct Item* head, int n);
void freeList(struct Item* head);