#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong. Tidak dapat menghapus elemen." << endl;
        } else {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack kosong." << endl;
            return -1;
        } else {
            return top->data;
        }
    }

    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    Stack stack;

    stack.push(5);
    stack.push(10);
    stack.push(15);

    cout << "Elemen paling atas: " << stack.peek() << endl;

    stack.pop();

    cout << "Elemen paling atas setelah pop: " << stack.peek() << endl;

    stack.pop();

    if (stack.isEmpty()) {
        cout << "Stack kosong." << endl;
    } else {
        cout << "Stack tidak kosong." << endl;
    }

    return 0;
}

