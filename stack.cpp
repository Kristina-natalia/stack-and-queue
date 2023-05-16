#include <iostream>
#include <stack>
#include <string>

using namespace std;

void printStack(stack<string> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

bool isStackEmpty(stack<string> s) {
    return s.empty();
}

int main() {
    stack<string> myStack;

    // Menambahkan elemen ke stack
    myStack.push("Kristina");
    myStack.push("Natalia");

    cout << "Stack setelah elemen ditambahkan: ";
    printStack(myStack);

    // Mengakses elemen teratas pada stack
    cout << "Elemen teratas pada stack: " << myStack.top() << endl;

    // Menghapus elemen teratas pada stack
    myStack.pop();
    cout << "Stack setelah elemen teratas dihapus: ";
    printStack(myStack);

    // Mengecek apakah stack kosong
    if (isStackEmpty(myStack)) {
        cout << "Stack kosong" << endl;
    } else {
        cout << "Stack tidak kosong" << endl;
    }

    return 0;
}

