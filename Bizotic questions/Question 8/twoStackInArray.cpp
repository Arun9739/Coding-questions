/* Implement 2 stacks inside a single array */

#include <iostream>
using namespace std;

class Stack{
public:
    int* arr;
    int size;
    int top1, top2;

    Stack(int n){
        size = n;
        arr = new int[n];  
        top1 = n/2+1;
        top2 = n/2;
    }
    void push1(int x){
        if(top1 > 0){
            top1--;
            arr[top1] = x;
        }
        else{
            cout << "Stack overflow by element " << x << endl;
        }
    }
    void push2(int x){
        if(top2 < size-1){
            top2++;
            arr[top2] = x;
        }
        else{
            cout << "Stack overflow by element " << x << endl;
        }
    }
    int pop1(){
        if(top1 <= size/2){
            int x = arr[top1];
            top1++;
            return x;
        }
        else{
            cout << "Stack underflow" << endl;
            exit(0);
        }
    }
    int pop2(){
        if(top2 >= size/2+1){
            int x = arr[top2];
            top2--;
            return x;
        }
        else{
            cout << "Stack underflow" << endl;
            exit(0);
        }
    }
};

int main(){
    Stack s(5);
    
    s.push1(5);
    s.push1(3);
    s.push2(7);

    cout << "Popped element from stack 1: " << s.pop1() << endl;
    cout << "Popped element from stack 2: " << s.pop2() << endl;
    cout << "Popped element from stack 2 " << s.pop2() << endl;

}