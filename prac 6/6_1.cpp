#include <iostream>
using namespace std;

class Stack {
    int arr[5];  
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == 4) {
            cout << "Error: Stack is full\n";
            return;
        }

        top++;
        arr[top] = x;

        cout << "Top tray: " << arr[top] << endl;
    }
    void pop() {
        if (top == -1) {
            cout << "Error: Stack is empty\n";
            return;
        }

        cout << "Taken tray: " << arr[top] << endl;
        top--;

        if (top == -1)
            cout << "Top tray: Empty\n";
        else
            cout << "Top tray: " << arr[top] << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.pop();
    s.pop();

    s.push(40);

    s.pop();
    s.pop();
    s.pop();  

    return 0;
}
