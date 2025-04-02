#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // Для strlen
#include <limits.h>
#include <locale.h>
#include "holodil.h"
//#include "my_list.h"




holodil* initialize(const char* firma, const char* defrost, double price) 
{
    holodil* h = (holodil*)malloc(sizeof(holodil));
    strncpy(h->firma, firma, sizeof(h->firma) - 1);
    h->firma[sizeof(h->firma) - 1] = '\0';
    strncpy(h->defrost, defrost, sizeof(h->defrost) - 1);
    h->defrost[sizeof(h->defrost) - 1] = '\0';
    h->price = price;
    return h;
}

void Print(const holodil* h) 
{
    printf("Firma: % s\n", h->firma);
    printf("Defrost: % s\n", h->defrost);
    printf("Price: % .2Lf\n", h->price);
    printf("\n");
}




