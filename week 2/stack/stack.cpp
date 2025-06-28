#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class Stack {  // Fixed: class name should be capitalized consistently
    private:   
        int data[MAX_SIZE];
        int topIndex;

    public:
        Stack(){  // Fixed: constructor name matches class name
            topIndex = -1;
        }

        void push(int x){
            if(topIndex >= MAX_SIZE - 1){  // Fixed: topIndex instead of 'top', MAX_SIZE instead of 'MAx_SIZE'
                cout << "Stack Overflow - cannot be pushed" << endl;  // Fixed: added missing '<<' and corrected text
                return;
            }
            data[++topIndex] = x;
        }

        int pop(){  // Fixed: should return int, not void
            if (isEmpty()){
                cout << "Stack underflow" << endl;  // Fixed: spelling of 'underflow'
                return -1;
            }
            return data[topIndex--];
        }

        int peek(){
            if(isEmpty()){
                cout << "Stack is empty" << endl;  // Fixed: corrected message
                return -1;
            }
            return data[topIndex];
        }

        bool isEmpty() {
            return topIndex == -1;
        }

        int size(){
            return topIndex + 1;
        }
};  // Fixed: added semicolon after class definition

int main(){  // Fixed: main should be outside the class
    Stack s;  // Fixed: Stack with capital S
    
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout << "Top element: " << s.peek() << endl;
    cout << "Popped element: " << s.pop() << endl;
    cout << "Top element after pop: " << s.peek() << endl;
    
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    
    return 0;
}