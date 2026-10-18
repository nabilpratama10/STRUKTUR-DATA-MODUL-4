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
int hitungSum() {
    int total = 0;
    Node* temp = head;
    while (temp != NULL) {
        total += temp->data;
        temp = temp->next;
    }
    return total;
}
int main() {
    int n, data;
    if (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> data;
            insertLast(data);
        }
        cout << hitungSum() << endl;
    }
    return 0;
}