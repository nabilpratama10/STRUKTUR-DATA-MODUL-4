#include <iostream>
#include <string>
using namespace std;
struct Node {
    string judul;
    int tahun;
    Node* next;
};
Node* head = NULL;
void insertLast(string j, int t) {
    Node* newNode = new Node();
    newNode->judul = j;
    newNode->tahun = t;
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
void deleteLast() {
    if (head == NULL) return; 
    
    if (head->next == NULL) { 
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while (temp->next->next != NULL) { 
        temp = temp->next;
    }
    delete temp->next; 
    temp->next = NULL; 
}
void cetakBuku() {
    cout << "Daftar Buku:" << endl;
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->judul << " (" << temp->tahun << ")" << endl;
        temp = temp->next;
    }
}
int main() {
    string kataBuku, namaBuku;
    int tahun;
    while (cin >> kataBuku >> namaBuku >> tahun) {
        string judulLengkap = kataBuku + " " + namaBuku; 
        insertLast(judulLengkap, tahun);
    }
    deleteLast();
    cetakBuku();
    
    return 0;
}