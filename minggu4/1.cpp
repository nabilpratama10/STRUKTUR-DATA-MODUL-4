#include <iostream>
#include <string>
using namespace std;
struct Node {
    string nama;
    Node* next;
};
Node* head = NULL;
void insertLast(string namaBaru) {
    Node* newNode = new Node();
    newNode->nama = namaBaru;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) { 
            temp = temp->next;
        }
        temp->next = newNode; 
    }
}
void deleteFirst() {
    if (head != NULL) {
        Node* temp = head;
        cout << "Melayani: " << temp->nama << endl;
        head = head->next; 
        delete temp;       
    }
}
void tampilkanAntrean() {
    cout << "Antrean: ";
    if (head == NULL) {
        cout << "Kosong";
    } else {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->nama;
            if (temp->next != NULL) cout << " -> ";
            temp = temp->next;
        }
    }
    cout << endl;
}
int main() {
    int pilihan;
    string nama;
    while (true) {
        cin >> pilihan;
        if (pilihan == 1) {
            cin >> nama;
            insertLast(nama);
            tampilkanAntrean();
        } else if (pilihan == 2) {
            deleteFirst();
            tampilkanAntrean();
        } else if (pilihan == 3) {
            break;
        }
    }
    return 0;
}