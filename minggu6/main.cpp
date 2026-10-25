#include <iostream>
#include "SingleLinkedList.h"

using namespace std;

int main() {
    List L;
    ElmList *P1, *P2, *P3, *P4, *P5;
    
    CreateList(L);
    
    P1 = alokasi(2);
    insertFirst(L, P1);
    
    P2 = alokasi(0);
    insertFirst(L, P2);
    
    P3 = alokasi(8);
    insertFirst(L, P3);
    
    P4 = alokasi(12);
    insertFirst(L, P4);
    
    P5 = alokasi(9);
    insertFirst(L, P5);
    
    cout << "Isi list: ";
    printInfo(L);
    
    ElmList* P = findElm(L, 8);
    if (P != nullptr) {
        cout << P->info << " ditemukan dalam list" << endl;
    } else {
        cout << "8 tidak ditemukan dalam list" << endl;
    }
    
    cout << "Total info dari kelima elemen adalah " << sumInfo(L) << endl;
    
    P = L.First;
    while (P != nullptr) {
        ElmList* Q = P;
        P = P->next;
        dealokasi(Q);
    }
    L.First = nullptr;
    
    return 0;
}