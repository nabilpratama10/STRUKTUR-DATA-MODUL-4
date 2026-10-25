#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

struct ElmList {
    int info;
    ElmList* next;
};

struct List {
    ElmList* First;
};

void CreateList(List &L);
ElmList* alokasi(int nilai);
void dealokasi(ElmList* &P);
void printInfo(List L);
ElmList* findElm(List L, int nilai);
void insertFirst(List &L, ElmList* P);
int sumInfo(List L);

#endif