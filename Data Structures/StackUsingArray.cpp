#include <iostream>
using namespace std;

#define MAX 1000

class Stack{
    int top;
    public:
        int a[MAX];
        Stack(){
            top = -1;
        }
        bool push(int x);
        int pop();
        int peek();
        bool isEmpty();
};

bool Stack::push(int x){
    if(top >= MAX-1){
        cout << "Stack Overflow";
        return false;
    }
    else{
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

bool Stack::isEmpty(){
    return (top < 0);
}

int Stack :: pop(){
    if(top < 0){
        cout << "Stack Underflow";
        return 0;
    }
    else{
        int x = a[top--];
        return x;
    }
}

int Stack :: peek(){
    if(top < 0){
        cout << "Stack is Empty";
        return 0;
    }
    else{
        int x = a[top];
        return x;
    }
}

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
    cout << s.peek() << " is the top element\n";
    cout << s.isEmpty() << " is the status of stack\n";
    return 0;
}