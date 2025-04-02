#pragma once
//#include "holodil.h"
//#include "my_list.h"

// Прототипы функций
holodil* initialize(const char* firma, const char* defrost, double price);
void Print(const holodil* h);
struct Item* InsertToStart(holodil* h, struct Item* head);
struct Item* deleteFromStart(struct Item* head);
void printList(struct Item* head);
struct Item* InsertSort(holodil* h, struct Item* head);
struct Item* Delete_Number(struct Item* head, int n);
void freeList(struct Item* head);
