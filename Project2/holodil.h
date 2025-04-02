#pragma once

typedef struct {
    char firma[100];
    char defrost[100];
    double price;
} holodil;

holodil* initialize(const char* firma, const char* defrost, double price);
void Print(const holodil* h);
struct Item* InsertToStart(holodil* h, struct Item* head);



