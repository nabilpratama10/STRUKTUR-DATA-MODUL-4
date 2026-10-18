#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node* head = NULL; 
void insertLast(int nilaiBaru) {
    Node* newNode = new Node();
    newNode->data = nilaiBaru;
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
void insertAfter(int nilaiDicari, int nilaiBaru) {
    Node* curr = head;
    while (curr != NULL) {
        if (curr->data == nilaiDicari) { 
            Node* newNode = new Node();
            newNode->data = nilaiBaru;
            newNode->next = curr->next; 
            curr->next = newNode;       
            break; 
        }
        curr = curr->next;
    }
}
void cetakList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    int n, data, nilaiDicari, nilaiBaru;
    if (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> data;
            insertLast(data);
        }
        cin >> nilaiDicari;
        cin >> nilaiBaru;
        insertAfter(nilaiDicari, nilaiBaru);
        cetakList();
    }
    return 0;
}