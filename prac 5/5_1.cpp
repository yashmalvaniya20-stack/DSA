#include <iostream>
#include <string>
using namespace std;

struct Node {
    string song;
    Node* prev;
    Node* next;

    Node(string s) {
        song = s;
        prev = nullptr;
        next = nullptr;
    }
};

class Playlist {
private:
    Node* head;
    Node* tail;

public:
    Playlist() {
        head = nullptr;
        tail = nullptr;
    }

    void addBeginning(string song) {
        Node* newNode = new Node(song);

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void addEnd(string song) {
        Node* newNode = new Node(song);

        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insertAfter(string target, string song) {
        Node* current = head;

    
        while (current != nullptr && current->song != target) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Song not found\n";
            return;
        }

        Node* newNode = new Node(song);

        newNode->prev = current;
        newNode->next = current->next;

    
        if (current->next != nullptr) {
            current->next->prev = newNode;
        } else {
        
            tail = newNode;
        }


        current->next = newNode;
    }

    
    void removeFirst() {
        if (head == nullptr) {
            cout << "Playlist is empty\n";
            return;
        }

        Node* temp = head;

        if (head == tail) {
            head = tail = nullptr;
        } else {
            head = head->next;
            head->prev = nullptr;
        }

        delete temp;
    }


    int count() {
        int total = 0;
        Node* current = head;

        while (current != nullptr) {
            total++;
            current = current->next;
        }

        return total;
    }
    
    void display() {
        Node* current = head;

        cout << "Playlist: ";

        while (current != nullptr) {
            cout << current->song;

            if (current->next != nullptr)
                cout << " -> ";

            current = current->next;
        }

        cout << "\n";
        cout << "Count: " << count() << "\n";
    }
};

int main() {
    Playlist playlist;

    playlist.addBeginning("Song A");
    playlist.display();

    playlist.addEnd("Song B");
    playlist.display();

    playlist.addEnd("Song C");
    playlist.display();

    playlist.insertAfter("Song B", "Song X");
    playlist.display();

    playlist.removeFirst();
    playlist.display();

    playlist.insertAfter("Song Z", "Song Y");
    playlist.display();

    return 0;
}
