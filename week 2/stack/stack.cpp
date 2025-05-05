#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

class Stack {
private:
    int data[MAX_SIZE]; // Array to store stack elements
    int topIndex;       // Index of the top element

public:
    // Constructor
    Stack() {
        topIndex = -1; // Initialize stack as empty
    }

    // Push an element onto the stack
    void push(int x) {
        if (topIndex >= MAX_SIZE - 1) {
            cout << "Stack Overflow: Cannot push, stack is full." << endl;
            return;
        }
        data[++topIndex] = x;
    }

    // Remove and return the top element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow: Cannot pop from empty stack." << endl;
            return -1; // Return a sentinel value or consider throwing an exception
        }
        return data[topIndex--];
    }

    // Return the top element without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1; // Return a sentinel value or consider throwing an exception
        }
        return data[topIndex];
    }

    // Check if the stack is empty
    bool isEmpty() {
        return topIndex == -1;
    }

    // Additional method to get the current size of the stack
    int size() {
        return topIndex + 1;
    }
};

int main() {
    Stack s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << "Top element: " << s.peek() << endl;
    cout << "Popped element: " << s.pop() << endl;
    cout << "Top element after pop: " << s.peek() << endl;
    
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}