#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <locale.h>

#include "my_list.h"
#include "holodil.h"


int main()
{
    int n;
    setlocale(LC_ALL, "Russian");
    holodil* h1, * h2, * h3;
    setlocale(LC_ALL, "Russian");
    h1 = initialize("LG", "Exist", 19999.9);
    h2 = initialize("BORK", "NotExist", 22555.9);
    h3 = initialize("Lux", "Exist", 30999.9);

    struct Item* head = NULL;
    head = InsertToStart(h1, head);
    head = InsertToStart(h2, head);
    head = InsertToStart(h3, head);
    printList(head);

    head = deleteFromStart(head);
    printf("Удилили первый элемент: \n");
    printList(head);
    freeList(head);

    head = NULL;
    holodil* h11, * h22, * h33, * h44;
    h11 = initialize("kivi", "Exist", 9999.9);
    h22 = initialize("numb", "NotExist", 20555.9);
    h33 = initialize("detroid", "Exist", 17999.9);
    h44 = initialize("pervyu", "NotExist", 21999.9);

    head = InsertSort(h11, head);
    head = InsertSort(h22, head);
    head = InsertSort(h33, head);
    head = InsertSort(h44, head);
    printList(head);

    printf("Введите номер элемента удаления: ");
    scanf("%d", &n);
    head = Delete_Number(head, n);
    printList(head);
    freeList(head);
    return 0;
}