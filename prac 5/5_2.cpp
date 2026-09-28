#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;

void insert(int x) {
    Node* n = new Node;
    n->data = x;

    if (head == NULL) {
        head = n;
        n->next = head;
        n->prev = head;
        return;
    }

    Node* last = head->prev;
    n->next = head;
    n->prev = last;

    last->next = n;
    head->prev = n;
}

void remove(int x) {
    if (head == NULL)
        return;

    Node* temp = head;

    do {
        if (temp->data == x) {


            if (temp->next == temp) {
                delete temp;
                head = NULL;
                return;
            }
            
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;


            if (temp == head)
                head = temp->next;

            delete temp;
            return;
        }

        temp = temp->next;

    } while (temp != head);
}

void display() {
    if (head == NULL) {
        cout << "Empty\n";
        return;
    }

    Node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {
    insert(1);
    insert(2);
    insert(3);

    display();

    remove(2);
    display();

    remove(1);
    display();

    return 0;
}
