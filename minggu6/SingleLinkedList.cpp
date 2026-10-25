#include "SingleLinkedList.h"
#include <iostream>

using namespace std;

void CreateList(List &L) {
    L.First = nullptr;
}

ElmList* alokasi(int nilai) {
    ElmList* P = new ElmList;
    P->info = nilai;
    P->next = nullptr;
    return P;
}

void dealokasi(ElmList* &P) {
    delete P;
    P = nullptr;
}

void printInfo(List L) {
    ElmList* P = L.First;
    if (P == nullptr) {
        cout << "List Kosong" << endl;
        return;
    }
    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

ElmList* findElm(List L, int nilai) {
    ElmList* P = L.First;
    while (P != nullptr) {
        if (P->info == nilai) {
            return P;
        }
        P = P->next;
    }
    return nullptr;
}

void insertFirst(List &L, ElmList* P) {
    if (P != nullptr) {
        P->next = L.First;
        L.First = P;
    }
}

int sumInfo(List L) {
    int total = 0;
    ElmList* P = L.First;
    while (P != nullptr) {
        total += P->info;
        P = P->next;
    }
    return total;
}