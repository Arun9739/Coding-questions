/* Stack implementation using Linked list */

#include <iostream>
using namespace std;

class StackNode{
    public:
        int data;
        StackNode *next;
};

struct Stack{
    StackNode *top;
};

StackNode* newNode(int data){
    StackNode* stackNode = new StackNode();
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

int isEmpty(Stack *stack){
    return !stack->top;
}

void push(Stack *stack, int data){
    StackNode *stackNode = newNode(data);
    stackNode->next = stack->top;
    stack->top = stackNode;
    cout << data << " pushed to stack\n";
}

int pop(Stack *stack){
    if(isEmpty(stack)){
        return -1;
    }
    StackNode *temp = stack->top;
    stack->top = stack->top->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

int peek(Stack *stack){
    if(isEmpty(stack)){
        return -1;
    }
    return stack->top->data;
}

int main(){
    Stack *stack = new Stack();
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    cout << pop(stack) << " popped from stack\n";
    cout << "Top element is " << peek(stack) << endl;
    return 0;
}
